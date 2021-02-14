#include <stdio.h>

int main(){

    int arr[3];
    int x, y, tmp;

    int length = sizeof(arr) / sizeof(arr[0]);

    scanf("%d", &arr[0]);
    scanf("%d", &arr[1]);
    scanf("%d", &arr[2]);

    int a = arr[0];
    int b = arr[1];
    int c = arr[2];

    for ( x = 0; x < length; x++) {
        
        for (int j = 0; j < length; j++) {

			if (arr[x] < arr[j]) {

				int tmp = arr[x]; 
				arr[x] = arr[j];  
				arr[j] = tmp;   
               
			}
		}

    }

    for ( y = 0; y < length; y++) {
        printf("%d\n",arr[y]);  
    }
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    return 0;
    
}