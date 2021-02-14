#include <stdio.h>

int main() {

    int i , j;
    double N[100];
    int length = (sizeof(N) / sizeof(N[0]));

    double n;
    scanf("%lf", &n);
    double tempV = n;

    for (i = 0; i < length; i++) {
        
        N[i] = tempV;
        tempV /= 2;

    }
    
    for(j = 0; j < length; j++) 
        printf("N[%d] = %.4lf\n",j,N[j]);

    return 0;

}