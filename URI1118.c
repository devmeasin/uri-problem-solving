#include <stdio.h>

int main() {
    
    int n = 1;
    float arr[3], x;

   while (1) {

       if (n == 3) {
            float avg = ((arr[1] + arr[2]) / 2.0);
            printf("media = %.2lf\n",avg);

            int x;
            while (1) {
                scanf("%d", &x);
                printf("novo calculo (1-sim 2-nao)\n");
                if(x ==1 || x == 2)break;
            }
            
            if(x == 1)  n = 1 , x = 0;
            else if(x == 2)break;
                
       }
       
       scanf("%f", &x);

       if (x > 0.0 && x <= 10.0) {
           arr[n] = x;
           n++;

       } else printf("nota invalida\n");
       
   }
   
    return 0;

}