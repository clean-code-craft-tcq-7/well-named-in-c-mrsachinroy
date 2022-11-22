
#include "colour_map\colour_map.h"
#include "std_type.h"
#include "stdio.h"


void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}


void PrintClrPairToCodeList()
{   
    
    for (int indx = 0; indx < MAX_COLORPAIR_NAME_CHARS; indx++)
    {
        ColorPair PairName = GetColorFromPairNumber(indx);

        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];

        ColorPairToString(&PairName, colorPairNames);
        printf("Got pair %s\n", colorPairNames);

        printf("test\n");

    }
    
}