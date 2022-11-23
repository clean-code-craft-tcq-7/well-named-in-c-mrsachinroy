
#ifndef _TEST_H_
#define _TEST_H_

#include "colour_map.h"

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);

extern void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);


#endif