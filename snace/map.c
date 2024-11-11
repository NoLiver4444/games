#include <stdio.h>

#include "game_settings.h"
#include "map_work.h"
#include "snace.h"

void map_null(int map[height][width]) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            map[i][j] = 0;
        }
    }
}

void map_change(int map[height][width], Snace *head) {
    Snace *tmp = head;
    while (tmp != NULL) {
        map[tmp->y][tmp->x] = 1;
        tmp = tmp->next;
    }
}

void display_draw(int map[height][width]) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (map[i][j] == 1) {
                printf(" * ");
            } else {
                printf(" - ");
            }
        }
        printf("\n");
    }
}