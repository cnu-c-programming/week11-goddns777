#include <stdio.h>

struct point{
    int x;
    int y;
};

int main(){
    struct point p = {1,2};
    printf("%d %d\n", p.x, p.y);
    return 0;
}
