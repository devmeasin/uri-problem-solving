#include <stdio.h>

int main() {
   
        int in;
        scanf("%d",&in);
        int arr[in];

        for (int i = 1; i <= in; i++) {
            scanf("%d",&arr[i]);
        }

        int countin = 0;
        int countout = 0;

        for (int j = 1; j <= in; j++) {
            
            if ( arr[j] >= 10 && arr[j] <= 20) {
                countin++;
            }else {
                countout++;
            }
        }
        
        printf("%d in\n",countin);
        printf("%d out\n",countout);
   

    return 0;

}