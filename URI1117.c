#include <stdio.h>

int main() {
    
    int n = 1;
    float arr[3], x;

   while (1) {

       if (n == 3) {
            float avg = ((arr[1] + arr[2]) / 2);
            printf("media = %.2f\n",avg);
            break;    
       }
       
       scanf("%f", &x);

       if (x > 0.0 && x <= 10.0) {
           arr[n] = x;
           n++;
       } else printf("nota invalida\n");
       
   }
   
    return 0;

}