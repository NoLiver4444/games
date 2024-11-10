#include <stdio.h>

#include "game_settings.h"
#include "map_work.h"
#include "snace.h"
#include "gameplay.h"

int main() {
    int map[height][width], answ_y = 0, answ_x = 0;
    char move = 'w';
    Snace *head = NULL;
    map_null(map);
    append(&head, 2, width / 2, height / 2);
    append(&head, 1, width / 2, height / 2 + 1);
    append(&head, 1, width / 2, height / 2 + 2);
    map_change(map, head);
    display_draw(map);
    map_null(map);
    printf("\n");
    while (1) {
        while ((move = getchar()) != '\n') {
            check_move(move, head, &answ_y, &answ_x);
            if (answ_y != 0 || answ_x != 0) {
                move_body(head);
                head->x += answ_x;
                head->y += answ_y;
            }
            map_change(map, head);
            display_draw(map);
            map_null(map);
            answ_y = 0, answ_x = 0;
        }
    }
    return 0;
}