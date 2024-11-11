#include "snace.h"

Snace *createnew(int lvl, int x, int y) {
    Snace *newSnace = (Snace *)malloc(sizeof(Snace));
    newSnace->lvl = lvl;
    newSnace->x = x;
    newSnace->y = y;
    newSnace->direction = 1;
    newSnace->next = NULL;
    newSnace->prev = NULL;
    return newSnace;
};

void append(Snace **head, int lvl, int x, int y) {
    Snace *new_snace = createnew(lvl, x, y);
    Snace *last = *head;

    if (*head == NULL) {
        *head = new_snace;
    } else {
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new_snace;
        new_snace->prev = last;
        new_snace->direction = last->direction;
    }
}

void freeList(Snace *head) {
    Snace *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}