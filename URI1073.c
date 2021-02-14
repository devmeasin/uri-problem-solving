#include <stdio.h>

int main() { 

    int n;
    scanf("%d", &n);

    for (size_t i = 1; i <= n; i++) {
        
        if (i % 2 == 0) printf("%d^2 = %d\n" , i , (i * i));

    }

    return 0;

}