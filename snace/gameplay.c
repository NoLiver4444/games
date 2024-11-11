#include "snace.h"

void move(Snace *head, int direction);
void change_direction(Snace *head);

void check_move(char move, Snace *head) {
    switch (move) {
        case 'w':
            if (head->y - head->next->y != 1 || head->x != head->next->x) {
                head->direction = 1;
            }
            break;
        case 's':
            if (head->y - head->next->y != -1 || head->x != head->next->x) {
                head->direction = 3;
            }
            break;
        case 'a':
            if (head->x - head->next->x != 1 || head->y != head->next->y) {
                head->direction = 4;
            }
            break;
        case 'd':
            if (head->x - head->next->x != -1 || head->y != head->next->y) {
                head->direction = 2;
            }
            break;
        default:
            break;
    }
}

void move_body(Snace *head, int snace_len) {
    Snace *now = head;
    for (int i = 0; i < snace_len; i++) {
        move(now, now->direction);
        if (now->prev != NULL) {
            change_direction(now);
        }
        now = now->next;
    }
}

void move(Snace *head, int direction) {
    if (direction == 1) {
        head->y -= 1;
    } else if (direction == 2) {
        head->x += 1;
    } else if (direction == 3) {
        head->y += 1;
    } else if (direction == 4) {
        head->x -= 1;
    }
}

void change_direction(Snace *head) {
    if (head->y - head->prev->y == 1) {
        head->direction = 1;
    } else if (head->y - head->prev->y == -1) {
        head->direction = 3;
    } else if (head->x - head->prev->x == 1) {
        head->direction = 4;
    } else if (head->x - head->prev->x == -1) {
        head->direction = 2;
    }
}