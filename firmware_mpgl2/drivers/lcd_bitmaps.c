/*******************************************************************************
* File: lcd_bitmaps.c                                                                
* Description:
* Bitmap data for dot matrix LCD
*******************************************************************************/

#include "configuration.h"

/*******************************************************************************
* Bookmarks
********************************************************************************
$$$$$  Small Font Character Bitmaps
%%%%%  Big Font Character Bitmaps
^^^^^ Image Bitmaps
*******************************************************************************/
/* All bitmap data is generated using the LCD Worksheet NHD-C12864LZ.xlsm tool.  Data is simply
copied and pasted into this file, though manual definitions can be written if desired. 
For any file that uses the bitmaps defined here, the array name must be brought in
to the source file with "extern" (you cannot simply include this header file).  */


/*******************************************************************************
* Small Font Character Bitmaps                                             $$$$$
*******************************************************************************/

/* Small fonts are indexed by their ASCII values */
const u8 G_aau8SmallFonts[][LCD_SMALL_FONT_ROWS][LCD_SMALL_FONT_COLUMN_BYTES] = 
{
{ /* SmallFontSpace */
 {0x00},
 {0x00},
 {0x00},
 {0x00},
 {0x00},
 {0x00},
 {0x00},
},


{ /* SmallFontExclamation */
 {0x04},
 {0x04},
 {0x04},
 {0x04},
 {0x00},
 {0x00},
 {0x04},
},


{ /* SmallFontQuote */
 {0x0A},
 {0x0A},
 {0x0A},
 {0x00},
 {0x00},
 {0x00},
 {0x00},
},


{ /* SmallFontPound */
 {0x0A},
 {0x0A},
 {0x1F},
 {0x0A},
 {0x1F},
 {0x0A},
 {0x0A},
},


{ /* SmallFontDollar */
 {0x04},
 {0x1E},
 {0x05},
 {0x0E},
 {0x14},
 {0x0F},
 {0x04},
},


{ /* SmallFontPercent */
 {0x03},
 {0x13},
 {0x08},
 {0x04},
 {0x02},
 {0x19},
 {0x18},
},


{ /* SmallFontAmpersand */
 {0x06},
 {0x09},
 {0x05},
 {0x02},
 {0x05},
 {0x09},
 {0x16},
},


{ /* SmallFontApostrophe */
 {0x06},
 {0x04},
 {0x02},
 {0x00},
 {0x00},
 {0x00},
 {0x00},
},


{ /* SmallFontLeftbracket */
 {0x08},
 {0x04},
 {0x02},
 {0x02},
 {0x02},
 {0x04},
 {0x08},
},


{ /* SmallFontRightbracket */
 {0x02},
 {0x04},
 {0x08},
 {0x08},
 {0x08},
 {0x04},
 {0x02},
},


{ /* SmallFontStar */
 {0x00},
 {0x04},
 {0x15},
 {0x0E},
 {0x15},
 {0x04},
 {0x00},
},


{ /* SmallFontPlus */
 {0x00},
 {0x04},
 {0x04},
 {0x1F},
 {0x04},
 {0x04},
 {0x00},
},


{ /* SmallFontComma */
 {0x00},
 {0x00},
 {0x00},
 {0x00},
 {0x06},
 {0x04},
 {0x02},
},


{ /* SmallFontMinus */
 {0x00},
 {0x00},
 {0x00},
 {0x1F},
 {0x00},
 {0x00},
 {0x00},
},


{ /* SmallFontPeriod */
 {0x00},
 {0x00},
 {0x00},
 {0x00},
 {0x00},
 {0x06},
 {0x06},
},


{ /* SmallFontForwardslash */
 {0x00},
 {0x10},
 {0x08},
 {0x04},
 {0x02},
 {0x01},
 {0x00},
},


{ /* SmallFont0 */
 {0x0E},
 {0x11},
 {0x19},
 {0x15},
 {0x13},
 {0x11},
 {0x0E},
},


{ /* SmallFont1 */
 {0x04},
 {0x06},
 {0x04},
 {0x04},
 {0x04},
 {0x04},
 {0x0E},
},


{ /* SmallFont2 */
 {0x0E},
 {0x11},
 {0x10},
 {0x08},
 {0x04},
 {0x02},
 {0x1F},
},


{ /* SmallFont3 */
 {0x1F},
 {0x08},
 {0x04},
 {0x08},
 {0x10},
 {0x11},
 {0x0E},
},


{ /* SmallFont4 */
 {0x08},
 {0x0C},
 {0x0A},
 {0x09},
 {0x1F},
 {0x08},
 {0x08},
},


{ /* SmallFont5 */
 {0x1F},
 {0x01},
 {0x0F},
 {0x10},
 {0x10},
 {0x11},
 {0x0E},
},


{ /* SmallFont6 */
 {0x0C},
 {0x02},
 {0x01},
 {0x0F},
 {0x11},
 {0x11},
 {0x0E},
},


{ /* SmallFont7 */
 {0x1F},
 {0x10},
 {0x08},
 {0x04},
 {0x02},
 {0x02},
 {0x02},
},


{ /* SmallFont8 */
 {0x0E},
 {0x11},
 {0x11},
 {0x0E},
 {0x11},
 {0x11},
 {0x0E},
},


{ /* SmallFont9 */
 {0x0E},
 {0x11},
 {0x11},
 {0x1E},
 {0x10},
 {0x08},
 {0x06},
},


{ /* SmallFontColon */
 {0x00},
 {0x06},
 {0x06},
 {0x00},
 {0x06},
 {0x06},
 {0x00},
},


{ /* SmallFontSemicolon */
 {0x00},
 {0x06},
 {0x06},
 {0x00},
 {0x06},
 {0x04},
 {0x02},
},


{ /* SmallFontLessthan */
 {0x08},
 {0x04},
 {0x02},
 {0x01},
 {0x02},
 {0x04},
 {0x08},
},


{ /* SmallFontEqual */
 {0x00},
 {0x00},
 {0x1F},
 {0x00},
 {0x1F},
 {0x00},
 {0x00},
},


{ /* SmallFontGreaterthan */
 {0x02},
 {0x04},
 {0x08},
 {0x10},
 {0x08},
 {0x04},
 {0x02},
},


{ /* SmallFontQuestion */
 {0x0E},
 {0x11},
 {0x10},
 {0x08},
 {0x04},
 {0x00},
 {0x04},
},


{ /* SmallFontAt */
 {0x0E},
 {0x11},
 {0x10},
 {0x16},
 {0x15},
 {0x15},
 {0x0E},
},


{ /* SmallFontA */
 {0x0E},
 {0x11},
 {0x11},
 {0x1F},
 {0x11},
 {0x11},
 {0x11},
},


{ /* SmallFontB */
 {0x0F},
 {0x11},
 {0x11},
 {0x0F},
 {0x11},
 {0x11},
 {0x0F},
},


{ /* SmallFontC */
 {0x0E},
 {0x11},
 {0x01},
 {0x01},
 {0x01},
 {0x11},
 {0x0E},
},


{ /* SmallFontD */
 {0x07},
 {0x09},
 {0x11},
 {0x11},
 {0x11},
 {0x09},
 {0x07},
},


{ /* SmallFontE */
 {0x1F},
 {0x01},
 {0x01},
 {0x0F},
 {0x01},
 {0x01},
 {0x1F},
},


{ /* SmallFontF */
 {0x1F},
 {0x01},
 {0x01},
 {0x0F},
 {0x01},
 {0x01},
 {0x01},
},


{ /* SmallFontG */
 {0x0E},
 {0x11},
 {0x01},
 {0x1D},
 {0x11},
 {0x11},
 {0x0E},
},


{ /* SmallFontH */
 {0x11},
 {0x11},
 {0x11},
 {0x1F},
 {0x11},
 {0x11},
 {0x11},
},


{ /* SmallFontI */
 {0x0E},
 {0x04},
 {0x04},
 {0x04},
 {0x04},
 {0x04},
 {0x0E},
},


{ /* SmallFontJ */
 {0x1C},
 {0x08},
 {0x08},
 {0x08},
 {0x08},
 {0x09},
 {0x06},
},


{ /* SmallFontK */
 {0x11},
 {0x09},
 {0x05},
 {0x03},
 {0x05},
 {0x09},
 {0x11},
},


{ /* SmallFontL */
 {0x01},
 {0x01},
 {0x01},
 {0x01},
 {0x01},
 {0x01},
 {0x1F},
},


{ /* SmallFontM */
 {0x11},
 {0x1B},
 {0x15},
 {0x15},
 {0x11},
 {0x11},
 {0x11},
},


{ /* SmallFontN */
 {0x11},
 {0x11},
 {0x13},
 {0x15},
 {0x19},
 {0x11},
 {0x11},
},


{ /* SmallFontO */
 {0x0E},
 {0x11},
 {0x11},
 {0x11},
 {0x11},
 {0x11},
 {0x0E},
},


{ /* SmallFontP */
 {0x0F},
 {0x11},
 {0x11},
 {0x0F},
 {0x01},
 {0x01},
 {0x01},
},


{ /* SmallFontQ */
 {0x0E},
 {0x11},
 {0x11},
 {0x11},
 {0x15},
 {0x09},
 {0x16},
},


{ /* SmallFontR */
 {0x0F},
 {0x11},
 {0x11},
 {0x0F},
 {0x05},
 {0x09},
 {0x11},
},


{ /* SmallFontS */
 {0x1E},
 {0x01},
 {0x01},
 {0x0E},
 {0x10},
 {0x10},
 {0x0F},
},


{ /* SmallFontT */
 {0x1F},
 {0x04},
 {0x04},
 {0x04},
 {0x04},
 {0x04},
 {0x04},
},


{ /* SmallFontU */
 {0x11},
 {0x11},
 {0x11},
 {0x11},
 {0x11},
 {0x11},
 {0x0E},
},


{ /* SmallFontV */
 {0x11},
 {0x11},
 {0x11},
 {0x11},
 {0x11},
 {0x0A},
 {0x04},
},


{ /* SmallFontW */
 {0x11},
 {0x11},
 {0x11},
 {0x11},
 {0x15},
 {0x15},
 {0x0E},
},


{ /* SmallFontX */
 {0x11},
 {0x11},
 {0x0A},
 {0x04},
 {0x0A},
 {0x11},
 {0x11},
},


{ /* SmallFontY */
 {0x11},
 {0x11},
 {0x11},
 {0x0A},
 {0x04},
 {0x04},
 {0x04},
},


{ /* SmallFontZ */
 {0x1F},
 {0x10},
 {0x08},
 {0x04},
 {0x02},
 {0x01},
 {0x1F},
},


{ /* SmallFontLeftsquarebracket */
 {0x0E},
 {0x02},
 {0x02},
 {0x02},
 {0x02},
 {0x02},
 {0x0E},
},


{ /* SmallFontBackslash */
 {0x00},
 {0x01},
 {0x02},
 {0x04},
 {0x08},
 {0x10},
 {0x00},
},


{ /* SmallFontRightsquarebracket */
 {0x0E},
 {0x08},
 {0x08},
 {0x08},
 {0x08},
 {0x08},
 {0x0E},
},


{ /* SmallFontCarat */
 {0x04},
 {0x0A},
 {0x11},
 {0x00},
 {0x00},
 {0x00},
 {0x00},
},


{ /* SmallFontUnderscore */
 {0x00},
 {0x00},
 {0x00},
 {0x00},
 {0x00},
 {0x00},
 {0x1F},
},


{ /* SmallFontBlip */
 {0x02},
 {0x04},
 {0x08},
 {0x00},
 {0x00},
 {0x00},
 {0x00},
},


{ /* SmallFonta */
 {0x00},
 {0x00},
 {0x0E},
 {0x10},
 {0x1E},
 {0x11},
 {0x1E},
},


{ /* SmallFontb */
 {0x01},
 {0x01},
 {0x0F},
 {0x11},
 {0x11},
 {0x11},
 {0x0F},
},


{ /* SmallFontc */
 {0x00},
 {0x00},
 {0x0E},
 {0x01},
 {0x01},
 {0x11},
 {0x0E},
},


{ /* SmallFontd */
 {0x10},
 {0x10},
 {0x16},
 {0x19},
 {0x11},
 {0x11},
 {0x1E},
},


{ /* SmallFonte */
 {0x00},
 {0x00},
 {0x0E},
 {0x11},
 {0x1F},
 {0x01},
 {0x0E},
},


{ /* SmallFontf */
 {0x0C},
 {0x12},
 {0x02},
 {0x07},
 {0x02},
 {0x02},
 {0x02},
},


{ /* SmallFontg */
 {0x00},
 {0x1E},
 {0x11},
 {0x11},
 {0x1E},
 {0x10},
 {0x0E},
},


{ /* SmallFonth */
 {0x01},
 {0x01},
 {0x0D},
 {0x13},
 {0x11},
 {0x11},
 {0x11},
},


{ /* SmallFonti */
 {0x04},
 {0x00},
 {0x06},
 {0x04},
 {0x04},
 {0x04},
 {0x0E},
},


{ /* SmallFontj */
 {0x08},
 {0x00},
 {0x0C},
 {0x08},
 {0x08},
 {0x09},
 {0x06},
},


{ /* SmallFontk */
 {0x01},
 {0x01},
 {0x09},
 {0x05},
 {0x03},
 {0x05},
 {0x09},
},


{ /* SmallFontl */
 {0x06},
 {0x04},
 {0x04},
 {0x04},
 {0x04},
 {0x04},
 {0x0E},
},


{ /* SmallFontm */
 {0x00},
 {0x00},
 {0x0B},
 {0x15},
 {0x15},
 {0x11},
 {0x11},
},


{ /* SmallFontn */
 {0x00},
 {0x00},
 {0x0D},
 {0x13},
 {0x11},
 {0x11},
 {0x11},
},


{ /* SmallFonto */
 {0x00},
 {0x00},
 {0x0E},
 {0x11},
 {0x11},
 {0x11},
 {0x0E},
},


{ /* SmallFontp */
 {0x00},
 {0x00},
 {0x0F},
 {0x11},
 {0x0F},
 {0x01},
 {0x01},
},


{ /* SmallFontq */
 {0x00},
 {0x00},
 {0x16},
 {0x19},
 {0x1E},
 {0x10},
 {0x10},
},


{ /* SmallFontr */
 {0x00},
 {0x00},
 {0x0D},
 {0x13},
 {0x01},
 {0x01},
 {0x01},
},


{ /* SmallFonts */
 {0x00},
 {0x00},
 {0x0E},
 {0x01},
 {0x0E},
 {0x10},
 {0x0F},
},


{ /* SmallFontt */
 {0x02},
 {0x02},
 {0x07},
 {0x02},
 {0x02},
 {0x12},
 {0x0C},
},


{ /* SmallFontu */
 {0x00},
 {0x00},
 {0x11},
 {0x11},
 {0x11},
 {0x19},
 {0x16},
},


{ /* SmallFontv */
 {0x00},
 {0x00},
 {0x11},
 {0x11},
 {0x11},
 {0x0A},
 {0x04},
},


{ /* SmallFontw */
 {0x00},
 {0x00},
 {0x11},
 {0x11},
 {0x11},
 {0x15},
 {0x0A},
},


{ /* SmallFontx */
 {0x00},
 {0x00},
 {0x11},
 {0x0A},
 {0x04},
 {0x0A},
 {0x11},
},


{ /* SmallFonty */
 {0x00},
 {0x00},
 {0x11},
 {0x11},
 {0x1E},
 {0x10},
 {0x0E},
},


{ /* SmallFontz */
 {0x00},
 {0x00},
 {0x1F},
 {0x08},
 {0x04},
 {0x02},
 {0x1F},
},


{ /* SmallFontLeftbrace */
 {0x08},
 {0x04},
 {0x04},
 {0x02},
 {0x04},
 {0x04},
 {0x08},
},


{ /* SmallFontPipe */
 {0x04},
 {0x04},
 {0x04},
 {0x04},
 {0x04},
 {0x04},
 {0x04},
},


{ /* SmallFontRightbrace */
 {0x02},
 {0x04},
 {0x04},
 {0x08},
 {0x04},
 {0x04},
 {0x02},
},


{ /* SmallFontTilda */
 {0x12},
 {0x15},
 {0x09},
 {0x00},
 {0x00},
 {0x00},
 {0x00},
},


{ /* SmallFontBlack */
 {0x1F},
 {0x1F},
 {0x1F},
 {0x1F},
 {0x1F},
 {0x1F},
 {0x1F},
}

};
  
/*******************************************************************************
* Single Color Big Font Character Bitmaps                                  %%%%%
*******************************************************************************/

/* Big fonts are indexed by their ASCII values.  Only digits 0 - 9 are included
at this time. */

const u8 G_aau8BigFonts[][LCD_BIG_FONT_ROWS][LCD_BIG_FONT_COLUMN_BYTES] = 
{
{ /* BigFont0 */
{0xFF, 0x03},
{0xFF, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0xFF, 0x03},
{0xFF, 0x03},
},


{ /* BigFont1 */
{0x30, 0x00},
{0x30, 0x00},
{0x30, 0x00},
{0x30, 0x00},
{0x30, 0x00},
{0x30, 0x00},
{0x30, 0x00},
{0x30, 0x00},
{0x30, 0x00},
{0x30, 0x00},
{0x30, 0x00},
{0x30, 0x00},
{0x30, 0x00},
{0x30, 0x00},
},


{ /* BigFont2 */
{0xFF, 0x03},
{0xFF, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0xFF, 0x03},
{0xFF, 0x03},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0xFF, 0x03},
{0xFF, 0x03},
},


{ /* BigFont3 */
{0xFF, 0x03},
{0xFF, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0xFC, 0x03},
{0xFC, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0xFF, 0x03},
{0xFF, 0x03},
},


{ /* BigFont4 */
{0x03, 0x00},
{0x03, 0x00},
{0xC3, 0x00},
{0xC3, 0x00},
{0xC3, 0x00},
{0xC3, 0x00},
{0xFF, 0x03},
{0xFF, 0x03},
{0xC0, 0x00},
{0xC0, 0x00},
{0xC0, 0x00},
{0xC0, 0x00},
{0xC0, 0x00},
{0xC0, 0x00},
},


{ /* BigFont5 */
{0xFF, 0x03},
{0xFF, 0x03},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0xFF, 0x03},
{0xFF, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0xFF, 0x03},
{0xFF, 0x03},
},


{ /* BigFont6 */
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0xFF, 0x03},
{0xFF, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0xFF, 0x03},
{0xFF, 0x03},
},


{ /* BigFont7 */
{0xFF, 0x03},
{0xFF, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
},


{ /* BigFont8 */
{0xFF, 0x03},
{0xFF, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0xFF, 0x03},
{0xFF, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0xFF, 0x03},
{0xFF, 0x03},
},


{ /* BigFont9 */
{0xFF, 0x03},
{0xFF, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0x03, 0x03},
{0xFF, 0x03},
{0xFF, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
{0x00, 0x03},
},


};

const u8 aau8EngenuicsLogoBlack[LCD_IMAGE_ROW_SIZE_50PX][LCD_IMAGE_COL_BYTES_50PX] = {
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0x7F, 0xE0, 0xFF, 0x03},
{0xFF, 0x0F, 0x00, 0x00, 0xC6, 0xFF, 0x03},
{0xFF, 0x0F, 0x00, 0x00, 0xCF, 0xFF, 0x03},
{0xFF, 0x0F, 0x00, 0x00, 0xCF, 0xFF, 0x03},
{0xFF, 0x0F, 0x00, 0x00, 0xC6, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0x7F, 0xE0, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xF0, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xF0, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0x7F, 0xE0, 0xFF, 0x03},
{0xFF, 0x0F, 0x00, 0x00, 0xC6, 0xFF, 0x03},
{0xFF, 0x0F, 0x00, 0x00, 0xCF, 0xFF, 0x03},
{0xFF, 0x0F, 0x00, 0x00, 0xCF, 0xFF, 0x03},
{0xFF, 0x0F, 0x00, 0x00, 0xC6, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0x7F, 0xE0, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xF0, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0xFF, 0xF0, 0xFF, 0x03},
{0xFF, 0x0F, 0xFF, 0x7F, 0xE0, 0xFF, 0x03},
{0xFF, 0x0F, 0x00, 0x00, 0xC6, 0xFF, 0x03},
{0xFF, 0x0F, 0x00, 0x00, 0xCF, 0xFF, 0x03},
{0xFF, 0x0F, 0x00, 0x00, 0xCF, 0xFF, 0x03},
{0xFF, 0x0F, 0x00, 0x00, 0xC6, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0x7F, 0xE0, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03}
};

const u8 aau8TestPosition[LCD_IMAGE_ROW_SIZE_50PX][LCD_IMAGE_COL_BYTES_50PX] = {
{0x0F, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03},
{0x01, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03},
{0x01, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03},
{0x01, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x40, 0x08, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x40, 0x08, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x08, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03},
{0x04, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00},
{0x02, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00},
{0x01, 0x00, 0x00, 0x00, 0x00, 0x40, 0x02}
};


const u8 aau8EngenuicsLogoBlackQ1[LCD_IMAGE_ROW_SIZE_25PX][LCD_IMAGE_COL_BYTES_25PX] = {
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0x0F, 0x00, 0x00},
{0xFF, 0x0F, 0x00, 0x00},
{0xFF, 0x0F, 0x00, 0x00},
{0xFF, 0x0F, 0x00, 0x00},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0x00, 0x00},
{0xFF, 0x0F, 0x00, 0x00}
};

const u8 aau8EngenuicsLogoBlackQ2[LCD_IMAGE_ROW_SIZE_25PX][LCD_IMAGE_COL_BYTES_25PX] = {
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0x7F, 0xF8, 0xFF, 0x01},
{0x3F, 0xF0, 0xFF, 0x01},
{0x00, 0xE3, 0xFF, 0x01},
{0x80, 0xE7, 0xFF, 0x01},
{0x80, 0xE7, 0xFF, 0x01},
{0x00, 0xE3, 0xFF, 0x01},
{0x3F, 0xF0, 0xFF, 0x01},
{0x7F, 0xF8, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0x7F, 0xF8, 0xFF, 0x01},
{0x3F, 0xF0, 0xFF, 0x01},
{0x00, 0xE3, 0xFF, 0x01},
{0x80, 0xE7, 0xFF, 0x01}
};


const u8 aau8EngenuicsLogoBlackQ3[LCD_IMAGE_ROW_SIZE_25PX][LCD_IMAGE_COL_BYTES_25PX] = {
{0xFF, 0x0F, 0x00, 0x00},
{0xFF, 0x0F, 0x00, 0x00},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0xFF, 0x01},
{0xFF, 0x0F, 0x00, 0x00},
{0xFF, 0x0F, 0x00, 0x00},
{0xFF, 0x0F, 0x00, 0x00},
{0xFF, 0x0F, 0x00, 0x00},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01}
};


const u8 aau8EngenuicsLogoBlackQ4[LCD_IMAGE_ROW_SIZE_25PX][LCD_IMAGE_COL_BYTES_25PX] = {
{0x80, 0xE7, 0xFF, 0x01},
{0x00, 0xE3, 0xFF, 0x01},
{0x3F, 0xF0, 0xFF, 0x01},
{0x7F, 0xF8, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0x7F, 0xF8, 0xFF, 0x01},
{0x3F, 0xF0, 0xFF, 0x01},
{0x00, 0xE3, 0xFF, 0x01},
{0x80, 0xE7, 0xFF, 0x01},
{0x80, 0xE7, 0xFF, 0x01},
{0x00, 0xE3, 0xFF, 0x01},
{0x3F, 0xF0, 0xFF, 0x01},
{0x7F, 0xF8, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01},
{0xFF, 0xFF, 0xFF, 0x01}
};


const u8 aau8PongBall[LCD_IMAGE_BALL_ROW_SIZE][LCD_IMAGE_BALL_COL_BYTES] = {
{0x07},
{0x07},
{0x07},
};


const u8 aau8PongPaddleBottom[LCD_IMAGE_PADDLE_ROW_SIZE][LCD_IMAGE_PADDLE_COL_BYTES] = {
{0xFF, 0x07},
{0x55, 0x05}
};


const u8 aau8PongPaddleTop[LCD_IMAGE_PADDLE_ROW_SIZE][LCD_IMAGE_PADDLE_COL_BYTES] = {
{0x55, 0x05},
{0xFF, 0x07}
};


const u8 aau8PlayerArrow[LCD_IMAGE_ARROW_ROW_SIZE][LCD_IMAGE_ARROW_COL_BYTES] = {
{0x01},
{0x03},
{0x07},
{0x0F},
{0x1F},
{0x3F},
{0x3F},
{0x1F},
{0x0F},
{0x07},
{0x03},
{0x01}
};



//#endif /* __LCDBITMAPS_H */

