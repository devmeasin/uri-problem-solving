#include <stdio.h>

int main(){

    int n, i, x;
    
    scanf("%d",&n);

    int arr[n];

    for ( i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    

    for ( x = 0; x < n; x++) {
        
        if (arr[x] == 0) {
            printf("NULL\n");
        
        } else if(arr[x] > 1) {
        
            if (arr[x] % 2 == 0) {
                printf("EVEN POSITIVE\n");
            
            } else if(arr[x] % 2 == 1) {
                printf("ODD POSITIVE\n");
            }

        } else {

            if (arr[x] % 2 == -0) {
                printf("EVEN NEGATIVE\n");
            } 
            if(arr[x] % 2 == -1) {
                printf("ODD NEGATIVE\n");
            }

        } 

    }

    return 0;

}