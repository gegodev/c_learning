#include <stdio.h>

int main(void){

    int x = 10;
    x += 5;

    printf("%d\n",x);

    x -= 5;

    printf("%d\n",x);


    x *= 5;
    printf("%d\n", x);

    x /= 5;
    printf("%d\n", x);

    printf("===============");
    x = 50;

    int h = x++ + ++x;

    printf("%d\n", h);

    return 0;
}