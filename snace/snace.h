#ifndef SNACE_H
#define SNACE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Snace {
    int lvl;
    int x;
    int y;
    int direction;
    struct Snace *next;
    struct Snace *prev;
} Snace;

Snace *createnew(int lvl, int x, int y);
void append(Snace **head, int lvl, int x, int y);
void freeList(Snace *head);

#endif  // SNACE_H