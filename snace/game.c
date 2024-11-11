#include <stdio.h>

#include "game_settings.h"
#include "gameplay.h"
#include "map_work.h"
#include "snace.h"

int main() {
    int map[height][width], snace_len = 5, apple_count = 0;
    char move = 'w';
    Snace *head = NULL;
    map_null(map);
    append(&head, 2, width / 2, height / 2);
    append(&head, 1, width / 2, height / 2 + 1);
    append(&head, 1, width / 2, height / 2 + 2);
    append(&head, 1, width / 2, height / 2 + 3);
    append(&head, 1, width / 2, height / 2 + 4);
    map_change(map, head);
    display_draw(map);
    map_null(map);
    printf("\n");
    while (1) {
        while ((move = getchar()) != '\n') {
            if (apple_count == 0) {
                create_apple();
            }
            check_move(move, head);
            move_body(head, snace_len);
            map_change(map, head);
            display_draw(map);
            map_null(map);
            printf("\n");
        }
    }
    return 0;
}