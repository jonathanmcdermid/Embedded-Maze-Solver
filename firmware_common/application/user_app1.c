#include <stdio.h>
#include "configuration.h"
#include "user_app1.h"

const u8 cursor[CELLSIZE-1][1] = {{0x00},{0x06},{0x06},{0x00}}; //bitmaps for LCD
const u8 blackout[1][10] = {{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07}};
const u8 closedcell[CELLSIZE+1][1] = {{0x3F},{0x21},{0x21},{0x21},{0x21},{0x3F}};
const u8 eastcell[CELLSIZE+1][1] = {{0x3F},{0x01},{0x01},{0x01},{0x01},{0x3F}};
const u8 westcell[CELLSIZE+1][1] = {{0x3F},{0x20},{0x20},{0x20},{0x20},{0x3F}};
const u8 eastwestcell[CELLSIZE+1][1] = {{0x3F},{0x00},{0x00},{0x00},{0x00},{0x3F}};
const u8 northcell[CELLSIZE+1][1] = {{0x21},{0x21},{0x21},{0x21},{0x21},{0x3F}};
const u8 northsouthcell[CELLSIZE+1][1] = {{0x21},{0x21},{0x21},{0x21},{0x21},{0x21}};
const u8 southcell[CELLSIZE+1][1] = {{0x3F},{0x21},{0x21},{0x21},{0x21},{0x21}};
const u8 southeastcell[CELLSIZE+1][1] = {{0x3F},{0x01},{0x01},{0x01},{0x01},{0x21}};
const u8 southwestcell[CELLSIZE+1][1] = {{0x3F},{0x20},{0x20},{0x20},{0x20},{0x21}};
const u8 southeastwestcell[CELLSIZE+1][1] = {{0x3F},{0x00},{0x00},{0x00},{0x00},{0x21}};
const u8 northeastcell[CELLSIZE+1][1] = {{0x21},{0x01},{0x01},{0x01},{0x01},{0x3F}};
const u8 northsoutheastcell[CELLSIZE+1][1] = {{0x21},{0x01},{0x01},{0x01},{0x01},{0x21}};
const u8 northwestcell[CELLSIZE+1][1] = {{0x21},{0x20},{0x20},{0x20},{0x20},{0x3F}};
const u8 northsouthwestcell[CELLSIZE+1][1] = {{0x21},{0x20},{0x20},{0x20},{0x20},{0x21}};
const u8 northeastwestcell[CELLSIZE+1][1] = {{0x21},{0x00},{0x00},{0x00},{0x00},{0x3F}};
const u8 opencell[CELLSIZE+1][1] = {{0x21},{0x00},{0x00},{0x00},{0x00},{0x21}};

static cell* matrix[MAZESIZE];                                  //array of cell pointers that make up the maze
static u16 botscore;

void CreateMaze(void)                                           //dynamically allocate memory for grid of cells that make maze
{
  for(u16 k=0;k<MAZESIZE;k++) matrix[k]=(cell*) 
    malloc(MAZESIZE*sizeof(cell));
  for(u16 i=0;i<MAZESIZE;i++)
  {
    for(u16 j=0;j<MAZESIZE;j++)
    {
      matrix[i][j].row=i*(CELLSIZE);
      matrix[i][j].col=j*(CELLSIZE);
      matrix[i][j].visited=FALSE;
      matrix[i][j].north=CLOSED;
      matrix[i][j].south=CLOSED;
      matrix[i][j].east=CLOSED;
      matrix[i][j].west=CLOSED;
      matrix[i][j].celltype=0;
      InitializeCell(&matrix[i][j]);
    }
  }
  BuildMaze();  
  for(u16 i=0;i<MAZESIZE;i++)        
  {
    for(u16 j=0;j<MAZESIZE;j++)
    {
      if(matrix[i][j].visited==FALSE) 
        FixCell(&matrix[i][j]);
      matrix[i][j].visited=FALSE;
      TranslateCell(&matrix[i][j]);
      //DrawCell(&matrix[i][j]);                                //this line is used for debugging
    }
  }
  SystemSleep();
}

void TranslateCell(cell* cellblock)                             //generates 4-digit number representing the type of cell has been created
{
  cellblock->celltype=0;                                        //1 = path between cells, 0 = wall between cells
  if(cellblock->west==OPEN) 
    cellblock->celltype+=1;                                     //ones represents west end
  if(cellblock->east==OPEN) 
    cellblock->celltype+=10;                                    //tens represents east end
  if(cellblock->south==OPEN) 
    cellblock->celltype+=100;                                   //hundreds represents south end    
  if(cellblock->north==OPEN) 
    cellblock->celltype+=1000;                                  //thousands represents north end                      
  SystemSleep();
}

void InitializeCell(cell* cellblock)                            //determines whether cells are inner cells, or wall cells
{
  switch (cellblock->row)
  {
  case 0:
    switch (cellblock->col)
    {
    case 0:
      cellblock->walltype=NORTHWEST;
      break;
    case ((MAZESIZE-1)*CELLSIZE):
      cellblock->walltype=NORTHEAST;
      break;
    default:
      cellblock->walltype=NORTH;
      break;
    }
    break;
  case ((MAZESIZE-1)*CELLSIZE):
    switch (cellblock->col)
    {
    case 0:
      cellblock->walltype=SOUTHWEST;
      break;
    case ((MAZESIZE-1)*CELLSIZE):
      cellblock->walltype=SOUTHEAST;
      break;
    default:
      cellblock->walltype=SOUTH;
      break;
    }
    break;
  default:
    switch (cellblock->col)
    {
    case 0:
      cellblock->walltype=WEST;
      break;
    case ((MAZESIZE-1)*CELLSIZE):
      cellblock->walltype=EAST;
      break;
    default:
      cellblock->walltype=NOTWALL;
      break;
    }
    break;
  }
  SetWall(cellblock);
  SystemSleep();
}

void SetWall(cell* wallcell)                                    //creates outer bounds of the maze
{
  switch (wallcell->walltype)
  {
  case NOTWALL:
    break;
  case EAST:
    wallcell->east=ENDWALL;
    break;
  case NORTHEAST:
    wallcell->east=ENDWALL;
    wallcell->north=ENDWALL;
    break;
  case NORTH:
    wallcell->north=ENDWALL;
    break;
  case NORTHWEST:
    wallcell->north=ENDWALL;
    wallcell->west=ENDWALL;
    break;
  case WEST:
    wallcell->west=ENDWALL;
    break;
  case SOUTHWEST:
    wallcell->west=ENDWALL;
    wallcell->south=ENDWALL;
    break;
  case SOUTH:
    wallcell->south=ENDWALL;
    break;
  case SOUTHEAST:
    wallcell->south=ENDWALL;
    wallcell->east=ENDWALL;
    break;
  default:
    wallcell->walltype=NOTWALL;
    break;
  }
  SystemSleep();
}

void BuildMaze(void)                                            //determines the layout of the maze
{
  u16 i=0;
  u16 j=0;
  u16 lastbranchi[MAZESIZE*MAZESIZE];
  u16 lastbranchj[MAZESIZE*MAZESIZE];
  u16 branchnumber=0;
  while(1)
  {
    matrix[i][j].visited=TRUE;
    u16 possibilities=0;
    bool options[]={FALSE,FALSE,FALSE,FALSE};
    while(possibilities==0)                                     //makes a central path of cells
    {
      possibilities=0;
      if(j<MAZESIZE-1)
      {
        if(matrix[i][j].east==CLOSED&&matrix[i][j+1].visited==FALSE)
        {
          options[EAST]=TRUE;
          possibilities++;
        }
      }
      if(i>0)
      {
        if(matrix[i][j].north==CLOSED&&matrix[i-1][j].visited==FALSE)
        {
          options[NORTH]=TRUE;
          possibilities++;
        }
      }
      if(j>0)
      {
        if(matrix[i][j].west==CLOSED&&matrix[i][j-1].visited==FALSE)
        {
          options[WEST]=TRUE;
          possibilities++;
        }
      }
      if(i<MAZESIZE-1)
      {
        if(matrix[i][j].south==CLOSED&&matrix[i+1][j].visited==FALSE)
        {
          options[SOUTH]=TRUE;
          possibilities++;
        }
      }
      if(possibilities==0&&branchnumber>0)                      //when path creates dead end, the last branch is revisited and the process restarts
      {
        branchnumber--;
        i=lastbranchi[branchnumber];
        j=lastbranchj[branchnumber];
      }
      else break;
    }
    if(possibilities==0)  
      break;                                                    //if there are no branches to return to and no unvisited adjacent cells, maze is complete
    if(possibilities>2)
    {
      lastbranchi[branchnumber]=i;
      lastbranchj[branchnumber]=j;
      branchnumber++;
    }
    while(1)                                                    //pseudo random algorithm for unpredictable maze
    {
      u16 choice=rand()% 4;
      if(choice==0&&options[EAST]==TRUE)
      {
        matrix[i][j].east=OPEN;
        j++;
        matrix[i][j].west=OPEN;
        break;
      }
      else if(choice==1&&options[NORTH]==TRUE)
      {
        matrix[i][j].north=OPEN;
        i--;
        matrix[i][j].south=OPEN;
        break;
      }
      else if(choice==2&&options[WEST]==TRUE)
      {
        matrix[i][j].west=OPEN;
        j--;
        matrix[i][j].east=OPEN;
        break;
      }
      else if(choice==3&&options[SOUTH]==TRUE)
      {
        matrix[i][j].south=OPEN;
        i++;
        matrix[i][j].north=OPEN;
        break;
      }
    }
  }
  SystemSleep();
}

void FixCell(cell* brokencell)                                  //creates openings to cells that were not visited by algorithm
{
  u16 i=brokencell->row/CELLSIZE;
  u16 j=brokencell->col/CELLSIZE;
  if(brokencell->east==CLOSED)
  {
    brokencell->east=OPEN;
    matrix[i][j+1].west=OPEN;
    TranslateCell(&matrix[i][j+1]);
  }
  else if(brokencell->west==CLOSED)
  {
    brokencell->west=OPEN;
    matrix[i][j-1].east=OPEN;
    TranslateCell(&matrix[i][j-1]);
  }
  else if(brokencell->north==CLOSED)
  {
    brokencell->north=OPEN;
    matrix[i-1][j].south=OPEN;
    TranslateCell(&matrix[i-1][j]);
  }
  else if(brokencell->south==CLOSED)
  {
    brokencell->south=OPEN;
    matrix[i+1][j].north=OPEN;
    TranslateCell(&matrix[i+1][j]);
  }
  SystemSleep();
}

void BlackOut(void)                                             //creates the initial black state of the maze
{
  PixelBlockType shadow;
  shadow.u16ColumnSize=61;
  shadow.u16RowSize=1;
  shadow.u16RowStart=0;
  shadow.u16ColumnStart=0;
  for(u16 i=0;i<(CELLSIZE*MAZESIZE+1);i++)
  {
    shadow.u16RowStart=i;
    LcdLoadBitmap(&blackout[0][0],&shadow);
  }
  SystemSleep();
}

void DrawCell(cell* cellblock)                                  //draws a single cell on the LCD
{
  PixelBlockType position;
  position.u16ColumnSize=CELLSIZE+1;
  position.u16RowSize=CELLSIZE+1;
  position.u16RowStart=cellblock->row;
  position.u16ColumnStart=cellblock->col;
  switch (cellblock->celltype)                                  //deciphers the 4 digit that which states the cell wall configuration
  {
  case 0:
    LcdLoadBitmap(&closedcell[1][1],&position);
    break;
  case 1:
    LcdLoadBitmap(&westcell[0][0],&position);
    break;
  case 10:
    LcdLoadBitmap(&eastcell[0][0],&position);
    break;
  case 11:
    LcdLoadBitmap(&eastwestcell[0][0],&position);
    break;
  case 100:
    LcdLoadBitmap(&southcell[0][0],&position);
    break;
  case 101:
    LcdLoadBitmap(&southwestcell[0][0],&position);
    break;
  case 110:
    LcdLoadBitmap(&southeastcell[0][0],&position);
    break;
  case 111:
    LcdLoadBitmap(&southeastwestcell[0][0],&position);
    break;
  case 1000:
    LcdLoadBitmap(&northcell[0][0],&position);
    break;
  case 1001:
    LcdLoadBitmap(&northwestcell[0][0],&position);
    break;
  case 1010:
    LcdLoadBitmap(&northeastcell[0][0],&position);
    break;
  case 1011:
    LcdLoadBitmap(&northeastwestcell[0][0],&position);
    break;
  case 1100:
    LcdLoadBitmap(&northsouthcell[0][0],&position);
    break;
  case 1101:
    LcdLoadBitmap(&northsouthwestcell[0][0],&position);
    break;
  case 1110:
    LcdLoadBitmap(&northsoutheastcell[0][0],&position);
    break;
  case 1111:
    LcdLoadBitmap(&opencell[0][0],&position);
    break;
  }
  SystemSleep();
}

void DeleteMaze(void)                                           //de-allocate memory for new maze to be generated
{
  for(u16 k=0;k<MAZESIZE;k++) 
    free(matrix[k]);
  SystemSleep();
}

void CreateBot(bot* npc)                                        //refreshes the values of the bot
{
  botscore=0;
  npc->row=0;
  npc->col=0;
  npc->direction=STILL;
  for(u16 i=0;i<MAZESIZE;i++)
  {
    npc->branchrow[i]=0;
    npc->branchcol[i]=0;
  }
  npc->branchindex=0;
  for(u16 i=0;i<MAZESIZE*MAZESIZE;i++) 
    npc->movehistory[i]=0;
  npc->moveindex=0;
  npc->backpedal=FALSE;
  SystemSleep();
}

void DrawBot(bot* npc)                                          //draws bot cursor on LCD
{
  PixelBlockType botblock;
  botblock.u16ColumnSize=CELLSIZE-1;
  botblock.u16RowSize=CELLSIZE-1;
  botblock.u16ColumnStart=npc->col+1;
  botblock.u16RowStart=npc->row+1;
  LcdLoadBitmap(&cursor[0][0],&botblock);
  SystemSleep();
}

void DelayBot(u16* ticker, bot* npc)                            //time buffer for bot movements
{
  if(*ticker>=18)
  {
    *ticker=0;
    if(npc->col%CELLSIZE==0&&npc->row%CELLSIZE==0)
    {
      RevealPath(npc);
      ThinkBot(npc);
      if(npc->backpedal==TRUE) 
        ReverseBot(npc);
      RevealPath(npc);                                          //this shouldnt have to be called twice
    }
    MoveBot(npc);
    DrawBot(npc);
  }
  SystemSleep();
}

void RevealPath(bot* npc)                                       //reveals cells directly in line with bot to LCD
{
  u16 i=npc->row/CELLSIZE;
  u16 j=npc->col/CELLSIZE;
  bool bestpath=FALSE;
  for(;matrix[i][j].east==OPEN;j++)                             //analysis of east path
    DrawCell(&matrix[i][j]);
  DrawCell(&matrix[i][j]);
  for(;j>npc->col/CELLSIZE;j--)
  {
    if(j==MAZESIZE-1&&matrix[i][j].south!=OPEN)
    {
      if(i==MAZESIZE-1&&j==MAZESIZE-1)
        break;
      else
        matrix[i][j].visited=TRUE;
    }
    else if(matrix[i][j].north!=OPEN&&matrix[i][j].south!=OPEN) 
      matrix[i][j].visited=TRUE;
    else break;
  }
  for(j=npc->col/CELLSIZE;matrix[i][j].west==OPEN;j--)          //analysis of west path
    DrawCell(&matrix[i][j]);
  DrawCell(&matrix[i][j]);
  for(;j<npc->col/CELLSIZE;j++)
  {
    if(j==0&&matrix[i][j].south==OPEN)
      bestpath=TRUE;
    else if(j==0&&matrix[i][j].south!=OPEN)
      matrix[i][j].visited=TRUE;
    else if(matrix[i][j].north!=OPEN&&matrix[i][j].south!=OPEN&&bestpath==FALSE) 
      matrix[i][j].visited=TRUE;
    else if(bestpath&&matrix[i][j].north==OPEN)
    {
      matrix[i-1][j].visited=TRUE;
      break;
    }
    else break;
  }
  j=npc->col/CELLSIZE;
  bestpath=FALSE;
  for(;matrix[i][j].north==OPEN;i--)                            //analysis of north path
    DrawCell(&matrix[i][j]);
  DrawCell(&matrix[i][j]);
  for(;i<npc->row/CELLSIZE;i++)
  {
    if(i==0&&matrix[i][j].east==OPEN)
      bestpath=TRUE;
    else if(i==0&&matrix[i][j].east!=OPEN)
      matrix[i][j].visited=TRUE;
    else if(matrix[i][j].east!=OPEN&&matrix[i][j].west!=OPEN&&bestpath==FALSE) 
      matrix[i][j].visited=TRUE;
    else if(bestpath&&matrix[i][j].west==OPEN)
    {
      matrix[i][j-1].visited=TRUE;
      break;
    }
    else break;
  }
  for(i=npc->row/CELLSIZE;matrix[i][j].south==OPEN;i++)         //analysis of south path
    DrawCell(&matrix[i][j]);
  DrawCell(&matrix[i][j]);
  for(;i>npc->row/CELLSIZE;i--)
  {
    if(i==MAZESIZE-1&&matrix[i][j].east!=OPEN)
    {
      if(i==MAZESIZE-1&&j==MAZESIZE-1)
        break;
      else
        matrix[i][j].visited=TRUE;
    }
    else if(matrix[i][j].east!=OPEN&&matrix[i][j].west!=OPEN) 
      matrix[i][j].visited=TRUE;
    else break;
  }
  SystemSleep();
}

void ThinkBot(bot* npc)                                         //algorithm for what path the bot chooses at branches
{
  if(npc->backpedal==TRUE) 
    return;
  bool vbias=FALSE;
  u16 i=npc->row/CELLSIZE;
  u16 j=npc->col/CELLSIZE;
  matrix[i][j].visited=TRUE;
  u16 options=0;
  if(matrix[i][j].north==OPEN&&matrix[i-1][j].visited==FALSE) 
    options++;
  if(matrix[i][j].south==OPEN&&matrix[i+1][j].visited==FALSE) 
    options++;
  if(matrix[i][j].east==OPEN&&matrix[i][j+1].visited==FALSE) 
    options++;
  if(matrix[i][j].west==OPEN&&matrix[i][j-1].visited==FALSE) 
    options++;
  if(options>1)                                                 //saves location of unexplored branches
  {
    npc->branchcol[npc->branchindex]=npc->col;
    npc->branchrow[npc->branchindex]=npc->row;
    npc->branchindex++;
  }
  if(i<=j) 
    vbias=TRUE;
  if(i>=MAZESIZE-1&&j>=MAZESIZE-1)
  {
    npc->direction=STILL;
    return;
  }
  else if(matrix[i][j].east==OPEN&&matrix[i][j+1].visited==FALSE)
  {
    if(matrix[i][j].south==OPEN&&matrix[i+1][j].visited==FALSE)
    {
      if(vbias) 
        npc->direction=SOUTH;
      else 
        npc->direction=EAST;
    }
    else 
      npc->direction=EAST;
  }
  else if(matrix[i][j].south==OPEN&&matrix[i+1][j].visited==FALSE) 
    npc->direction=SOUTH;
  else if(matrix[i][j].west==OPEN&&matrix[i][j-1].visited==FALSE) 
    npc->direction=WEST;
  else if(matrix[i][j].north==OPEN&&matrix[i-1][j].visited==FALSE) 
    npc->direction=NORTH;
  else npc->backpedal=TRUE;                                     //dead end scenarios
  if(npc->backpedal==FALSE&&npc->direction!=STILL)              //saves history of all movements for dead end scenario
  {
    npc->movehistory[npc->moveindex]=npc->direction;
    npc->moveindex++;
  }
  DisplayBotScore();
  SystemSleep();
}

void ReverseBot(bot* npc)                                       //called when bot has reached a dead end
{
  if(npc->row==npc->branchrow[npc->branchindex-1]&&npc->col==npc->branchcol[npc->branchindex-1])
  {
    npc->branchrow[npc->branchindex-1]=0;
    npc->branchcol[npc->branchindex-1]=0;
    npc->branchindex--;
    npc->backpedal=FALSE;
    ThinkBot(npc);
  }
  else                                                          //bot retraces steps until reaching unexplored branch
  {
    switch(npc->movehistory[npc->moveindex-1])
    {
    case EAST:
      npc->direction=WEST;                                      //inverted as the bot is moving approaching from the opposite direction
      npc->movehistory[npc->moveindex-1]=0;
      npc->moveindex--;
      break;
    case WEST:
      npc->direction=EAST;
      npc->movehistory[npc->moveindex-1]=0;
      npc->moveindex--;
      break;
    case NORTH:
      npc->direction=SOUTH;
      npc->movehistory[npc->moveindex-1]=0;
      npc->moveindex--;
      break;
    case SOUTH:
      npc->direction=NORTH;
      npc->movehistory[npc->moveindex-1]=0;
      npc->moveindex--;
      break;
    }
  }
  SystemSleep();
}

void MoveBot(bot* npc)                                          //reads bot's intended path and adjusts position
{
  switch (npc->direction)
  {
  case EAST:
    npc->col++;
    break;
  case NORTH:
    npc->row--;
    break;
  case WEST:
    npc->col--;
    break;
  case SOUTH:
    npc->row++;
    break;
  case STILL:
    return;
  }
  SystemSleep();
}

void DisplayBotScore(void)
{
  PixelAddressType scoreposition;
  scoreposition.u16PixelColumnAddress=MAZESIZE*CELLSIZE+5;
  scoreposition.u16PixelRowAddress=CELLSIZE-1;
  botscore+=1;
  u8 botstring[3];
  sprintf(botstring,"%u",botscore);
  LcdLoadString(botstring,LCD_FONT_BIG,&scoreposition);
  SystemSleep();
}

void UserApp1RunActiveState(void)                               //main function
{
  static u16 ticker=0;
  static bot npc;
  static bool playing=FALSE;
  if(WasButtonPressed(BUTTON1))                                 //button triggers a new maze to be created
  {
    ButtonAcknowledge(BUTTON1);
    LcdClearScreen();
    BlackOut();
    DeleteMaze();
    CreateMaze();
    CreateBot(&npc);
    playing=TRUE;
  }
  if(playing) 
    DelayBot(&ticker, &npc);
  ticker++;
  SystemSleep();
}

void UserApp1Initialize(void){
  for(u16 k=0;k<MAZESIZE;k++) matrix[k]=(cell*) 
    malloc(MAZESIZE*sizeof(cell));
  SystemSleep();
}
