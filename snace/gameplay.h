#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void check_move(char move, Snace *head, int *answ_y, int *answ_x);
void move_body(Snace *head);

#endif  // GAMEPLAY_H