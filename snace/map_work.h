#ifndef MAP_WORK_H
#define MAP_WORK_H

#include "game_settings.h"
#include "map_work.h"
#include "snace.h"

void map_null(int map[height][width]);
void map_change(int map[height][width], Snace *head);
void display_draw(int map[height][width]);

#endif  // MAP_WORK_H