#include "apple.h"

#include <stdlib.h>

Apple *createnew(int x, int y) {
    Apple *newApple = (Apple *)malloc(sizeof(Apple));
    newApple->x = x;
    newApple->y = y;
    return newSnace;
};

void create_apple() {
    int rand_x, rand_y;
    while (1) {
        rand_x = rand() % 17;
        rand_y = rand() % 17;
    }
    Apple *new_apple = createnew();
}