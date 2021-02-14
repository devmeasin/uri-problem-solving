#include <stdio.h>

int main(){

    float arr[6];

    for (int i = 1; i <= 6; i++) {
        scanf("%f", &arr[i]);
    }

    int length = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    float sum;

    for (int i = 1; i <= length; i++) {

        if (arr[i] > 0) {
            sum += arr[i];
            count++;        
        }
    
    }

    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum / count);

    return 0;

}