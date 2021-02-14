#include <stdio.h>

int main() {
   
   int n , i, j, x = 1, y = 4 , z;

   scanf("%d", &n);

   for (i = 1; i <= n; i++) {

       for ( j = x; j < y; j++) {
           
           printf("%d ",j);
           z = j;
          
       }
       printf("PUM\n");
        x = z + 2;
        y = z + 5;
   }
   
    return 0;

}