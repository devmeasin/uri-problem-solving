#include <stdio.h>

int main() {

    int i , j , x;
    int N[20];
    int length = (sizeof(N) / sizeof(N[0]));

    for (i = 0; i < length; i++) {
        int n;
        scanf("%d", &n);
        N[i] = n;
    }
    
    for(j = 0 , x = length - 1; j < length; j++ , x--) {
       printf("N[%d] = %d\n",j,N[x]);
    }

    return 0;

}