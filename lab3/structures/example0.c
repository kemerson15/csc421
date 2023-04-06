#include <stdio.h>

struct point {
    int x;
    int y;
};

int main () {
    struct point p;
    p.x = 10;
    p.y = 5;
    printf("My graph will draw a point at %d and %d.", p.x, p.y);

}