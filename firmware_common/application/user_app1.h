#ifndef __USER_APP1_H
#define __USER_APP1_H

#define EAST            0
#define NORTH           1
#define WEST            2
#define SOUTH           3
#define SOUTHWEST       4
#define NORTHEAST       5
#define SOUTHEAST       6
#define NORTHWEST       7
#define STILL           8
#define OPEN            88
#define CLOSED          99
#define NOTWALL         66
#define ENDWALL         77
#define CELLSIZE        5
#define MAZESIZE        12

typedef struct{
  u16 row;
  u16 col;
  u16 walltype;
  u16 celltype;
  u16 east;
  u16 north;
  u16 west;
  u16 south;
  bool visited;
}cell;

typedef struct{
  u16 row;
  u16 col;
  u16 direction;
  u16 branchrow[MAZESIZE];
  u16 branchcol[MAZESIZE];
  u16 movehistory[MAZESIZE*MAZESIZE];
  u16 branchindex;
  u16 moveindex;
  bool backpedal;
}bot;

void BlackOut(void);
void CreateMaze(void);
void InitializeCell(cell* cellblock);
void TranslateCell(cell* cellblock);
void SetWall(cell* wallcell);
void BuildMaze(void);
void FixCell(cell* brokencell);
void DrawCell(cell* cellblock);
void RevealPath(bot* npc);
void DeleteMaze(void);
void CreateBot(bot* npc);
void DrawBot(bot* npc);
void DelayBot(u16* ticker, bot* npc);
void ThinkBot(bot* npc);
void ReverseBot(bot* npc);
void MoveBot(bot* npc);
void DisplayBotScore(void);

void UserApp1RunActiveState(void);
void UserApp1Initialize(void);

#endif 
