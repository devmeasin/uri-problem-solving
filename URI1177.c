#include <stdio.h>

int main() {

    int i , j;
    int N[100];
    int length = (sizeof(N) / sizeof(N[0]));

    int n , x, count = 0;
    scanf("%d", &n);

    for (i = 0, x = 0; i < length; i++) {

        if (count < n) N[i] = x, x++;
        count++;
        if (count == n) x = 0 ,count = 0;;
            
    }
    
    for(j = 0; j < length; j++) 
        printf("N[%d] = %d\n",j,N[j]);

    return 0;

}