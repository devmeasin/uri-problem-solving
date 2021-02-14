#include <stdio.h>

int main() {

    int i , n;
    scanf("%d", &n);
    int arr[n];
    
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    int lowestValue = arr[0], arrInd;
    
    for(i = 0; i < n; i++) {
        if(arr[i] < lowestValue) {
            lowestValue = arr[i];
            arrInd = i;
        }
    }
    
    printf("Menor valor: %d\n",lowestValue);
    printf("Posicao: %d\n",arrInd);


    return 0;

}