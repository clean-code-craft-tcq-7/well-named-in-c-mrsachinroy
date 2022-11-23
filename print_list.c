
#include "colour_map.h"
#include "stdio.h"
#include "print_list.h"


void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}


void PrintClrPairToCodeList(void)
{ 
    printf("List of Total 25 Wire colour pairs is:\n");

    for (int indx = 1; indx <= MAX_COLORPAIR_NAME_CHARS; indx++)
    {
        ColorPair PairName = GetColorFromPairNumber(indx);

        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];

        ColorPairToString(&PairName, colorPairNames);

        printf("Pair No: %d Colour pair: %s\n", indx, colorPairNames);

    }
    
}