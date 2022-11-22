
#include "std_type.h"
#include "stdio.h"
#include <assert.h>
#include "test/test.h""








int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 11);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}