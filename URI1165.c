#include <stdio.h>

int main() {

    int i , loopEnd;
    scanf("%d", &loopEnd);

    for (i = 1; i <= loopEnd; i++) {
        
        int n, x, value = 0;
        scanf("%d", &n);

        for (x = 2; x < n; x++) {
            if(n % x == 0) {
                value = 1;
                break;
            }
        }

        if (value == 0) printf("%d eh primo\n",n);
        else printf("%d nao eh primo\n",n);
        
    }
    
    return 0;

}


/* 
#include <stdio.h>

int main() {

    int i , loopEnd;
    scanf("%d", &loopEnd);

    for (i = 1; i <= loopEnd; i++) {
        
        int n, x, value = 0;
        scanf("%d", &n);

        for (x = 2; x <= n / 2; x++) {
            if(n % x == 0) {
                value = 1;
                break;
            }
        }

        if (value == 0) printf("%d eh primo\n",n);
        else printf("%d nao eh primo\n",n);
        
    }
    
    return 0;

} */