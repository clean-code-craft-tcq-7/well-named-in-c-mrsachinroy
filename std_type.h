
#ifndef _STDTYPE_H_
#define _STDTYPE_H_



enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};



typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;



const int MAX_COLORPAIR_NAME_CHARS = 16;

#endif