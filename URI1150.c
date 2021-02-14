#include <stdio.h>

int main() {

    int i;
    int X , Z;
    int sum = 0 , count = 1;

    scanf("%d", &X);
    while (1) {
        scanf("%d", &Z);
        if (Z > X) 
            break;
    }

    for (i = X; i <= Z; i++) {
        sum += i;
        if (sum < Z) count++;
                
    }

    printf("%d\n", count);

    return 0;

}