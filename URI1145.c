#include <stdio.h>

int main() {
   
   int i, j, x, y;
   scanf("%d %d", &x , &y);
   int m = 1 , n = x;

   for (i = 1; i <= y; i+=x) {

       printf("%d",i);
       for ( j = m + 1; j <= n; j++) {
           printf(" %d",j);
       }
       printf("\n");
       m += x;
       n += x;   
   }

    return 0;

}