#include <stdio.h>

int main(){

    int i, x, y, sum = 0;
    int min, max;

    scanf("%d %d",&x,&y);

    if (x < y) {
        min = x;
        max = y;
    } else {
        min = y;
        max = x;
    }

    for ( i = (min + 1); i < max; i++) {
        if (i % 2 == 1 || i % 2 == -1) {
            sum += i;
        }
    }

    printf("%d\n",sum); 


    return 0;

}