#include <stdio.h>

int main() {

    int X;
    scanf("%d", &X);

    if (X > 0) {

        int Y = X + 11;

        for (size_t i = X; i <= Y; i++) {
            if (i % 2 != 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;

}