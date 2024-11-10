#include "snace.h"

void check_move(char move, Snace *head, int *answ_y, int *answ_x) {
    switch (move) {
    case 'w':
        if (head->y - head->next->y != 1 || head->x != head->next->x) {
            *answ_y = -1;
        }
        break;
    case 's':
        if (head->y - head->next->y != -1 || head->x != head->next->x) {
            *answ_y = 1;
        }
        break;
    case 'a':
        if (head->x - head->next->x != 1 || head->y != head->next->y) {
            *answ_x = -1;
        }
        break;
    case 'd':
        if (head->x - head->next->x != -1 || head->y != head->next->y) {
            *answ_x = 1;
        }
        break;
    default:
        break;
    }
    printf("\n\n%d %d %d %d\n", head->y, head->x, head->next->y - 1, head->y - head->next->y);
}

void move_body(Snace *head) {
    Snace *now = head->prev;
    Snace *next = now->prev;
    while (now != head) {
        now->x += next->x - now->x;
        now->y += next->y - now->y;
        now = next;
        next = now->prev;
    }
}