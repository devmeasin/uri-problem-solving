#include <stdio.h>

int main() {

    int i , j;
    int X[10];

    int length = (sizeof(X) / sizeof(X[0]));

    for (i = 0; i < length; i++) {
        int n;
        scanf("%d", &n);
        if (n <= 0)  X[i] = 1;
        else X[i] = n;
    }
    
    for(j = 0; j < length; j++) {
        printf("X[%d] = %d\n",j,X[j]);
    }

    return 0;

}