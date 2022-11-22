#ifndef _CLR_MAP_H_
#define _CLR_MAP_H_
#include "std_type.h"

ColorPair GetColorFromPairNumber(int pairNumber);

int GetPairNumberFromColor(const ColorPair* colorPair);

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

#endif