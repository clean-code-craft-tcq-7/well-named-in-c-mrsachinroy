#ifndef _CLR_MAP_H_
#define _CLR_MAP_H_


enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct ColorPair{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern const int MAX_COLORPAIR_NAME_CHARS;

ColorPair GetColorFromPairNumber(int pairNumber);

int GetPairNumberFromColor(const ColorPair* colorPair);

const char* MajorColorNames[5];
const char* MinorColorNames[5];



#endif