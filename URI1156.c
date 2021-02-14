#include <stdio.h>

int main() {

    float S = 0,  n = 1.0;
    for (int i = 1; i <= 39; i += 2) {
        S += (i / n);
        n = (n + n);
    }

    printf("%.2f\n", S);
    return 0;

}