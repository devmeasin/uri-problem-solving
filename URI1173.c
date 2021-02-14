#include <stdio.h>

int main() {

        int i , j;
        int N[10];
        int length = (sizeof(N) / sizeof(N[0]));

        int n;
        scanf("%d", &n);
        N[0] = n;
        int tempV = n;

        for (i = 1; i < length; i++) {
            tempV += tempV;
            N[i] = tempV;
        }
        
        for(j = 0; j < length; j++) {
            printf("N[%d] = %d\n",j,N[j]);
        }

    return 0;

}