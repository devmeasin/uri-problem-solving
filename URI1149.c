#include <stdio.h>

int main() {

    int i;
    int A , N;
    int sum = 0;

    scanf("%d", &A);
    while (1) {
        scanf("%d", &N);
        if (N > 0) 
            break;
    }

    for (i = 0; i < N; i++) {
        sum += i + A;
    }

    printf("%d\n", sum);

    return 0;

}