#ifndef APPLE_H
#define APPLE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Apple {
    int x;
    int y;
} Apple;

Apple *createnew(int lvl, int x, int y);

#endif  // APPLE_H