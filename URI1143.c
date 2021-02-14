#include <stdio.h>

int main() {
   
   int n , i, j, x = 0, y = 0 , z = 0;

   scanf("%d", &n);

   for (i = 1; i <= n; i++) {

       for ( j = 1; j <= 3; j++) {
           
           if (j == 1) x = i;
           if (j == 2) y = i * i;
           if (j == 3) z = i * i * i;

       }

       printf("%d %d %d\n",x , y , z);

   }
   
    return 0;

}