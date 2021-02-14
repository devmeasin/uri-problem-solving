#include <stdio.h>

int main() {

    int i , j;
    float A[100];
    int length = (sizeof(A) / sizeof(A[0]));

    for (i = 0; i < length; i++) {
        float n;
        scanf("%f", &n);
        A[i] = n;
    }
    
    for(j = 0; j < length; j++) {
        if (A[j] <= 10.0){
            printf("A[%d] = %.1f\n",j,A[j]);
        }
    }

    return 0;

}