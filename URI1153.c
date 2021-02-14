#include<stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    int factorial = 1;
    for (size_t i = 1; i <= x; i++) {
        factorial *= i;
    }

    printf("%d\n", factorial);
  
    return 0;
}