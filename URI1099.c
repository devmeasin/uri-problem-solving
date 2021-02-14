#include <stdio.h>

int main(){
    
    int a , i , n , x , y , sum = 0;
    scanf("%d",&n);
    int arr[n];

    for( a = 1; a <= n; a++) {

        scanf("%d %d",&x , &y);

            if (x > y) {

                int sum = 0;
                
                int temp = x;
                x = y;
                y = temp;
                if (x % 2 != 0) x++;
                for (i = x; i < y ; i++) {
                    if (i % 2 != 0) {
                        sum += i;

                    }            
                }

                printf("%d\n", sum);
                sum = 0;

            } else {
                
                if (x % 2 != 0) x++;
                for (i = x; i < y ; i++) {
                    if (i % 2 != 0) {
                        sum += i;   
                    }            
                }
                   
                printf("%d\n", sum);
                sum = 0;
            }
    }

    return 0;
}


// ======== Different Ways ===========



/* 

#include <stdio.h>

int main(){
    
    int a , i , n , x , y , sum = 0;
    scanf("%d",&n);
    int arr[n];

    for( a = 1; a <= n; a++) {

        scanf("%d %d",&x , &y);

            if (x > y) {

                int sum = 0;
                
                int temp = x;
                x = y;
                y = temp;
                if (x % 2 != 0) x++;
                for (i = x; i < y ; i++) {
                    if (i % 2 != 0) {
                        sum += i;

                    }            
                }

                arr[a] = sum;
                sum = 0;

            } else {
                
                if (x % 2 != 0) x++;
                for (i = x; i < y ; i++) {
                    if (i % 2 != 0) {
                        sum += i;   
                    }            
                }

                arr[a] = sum;
                sum = 0;
            }
    
    }

    for (int b = 1; b <= n ; b++) {
        printf("%d\n",arr[b]);
    }

    return 0;
}


 */