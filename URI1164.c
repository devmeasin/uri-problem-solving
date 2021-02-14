#include <stdio.h>

int main() {

    int i , loopEnd;
    scanf("%d", &loopEnd);

    for (i = 1; i <= loopEnd; i++) {
        
        int n, x, sum = 0;
        scanf("%d", &n);

        for (x = 1; x < n; x++) {
            if(n % x == 0) {
                sum += x;
            }
        }

        if (sum == n) printf("%d eh perfeito\n",n);
        else printf("%d nao eh perfeito\n",n);
        
    }
    
    return 0;

}