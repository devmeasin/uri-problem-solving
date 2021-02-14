#include <stdio.h>

int main() {

    int i , n;
    int x = 0, y = 1;
    int fib;
    scanf("%d", &n);

    printf("%d %d",x , y);
    for (i = 1; i <= n - 2 ; i++) {
        
        fib = x + y;
        x = y;
        y = fib;
        
        printf(" %d", fib);

    }

    printf("\n");
    
    return 0;

}




/* #include <stdio.h>

int main() {

    int i , n;
    int x = 0, y = 1;
    int fib;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        printf("%d", x);
        fib = x + y;
        x = y;
        y = fib;

    }

    printf("\n");
    
    return 0;

} */