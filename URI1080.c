#include <stdio.h>

int main() {

        int size = 100 , arr[size];

        for (int i = 1; i <= size; i++) {   
            scanf("%d", &arr[i]);
        }


        int maxNumber = arr[1];
        int position;

        for (int j = 1; j <= size; j++) {

            if (maxNumber < arr[j]) {

                 maxNumber = arr[j];
                 position = j;
            
            }

        }


        printf("%d\n", maxNumber);
        printf("%d\n", position);

        return 0;

}