#include <stdio.h>

int main(){

    int x , y ;
    scanf("%d %d", &x ,&y);

    if (x == 1) {

        float a = 4.00f;
        printf("Total: R$ %.2f\n" , (a * y));

    } else if (x == 2) {

         float b = 4.50f;
        printf("Total: R$ %.2f\n" ,( b * y));

    } else if (x == 3) {

         float c = 5.00f;
        printf("Total: R$ %.2f\n" ,( c * y));
        
    } else if (x == 4) {

         float d = 2.00f;
        printf("Total: R$ %.2f\n" ,( d * y));

    } else if (x == 5) {
         float e = 1.50f;
        printf("Total: R$ %.2f\n" ,( e * y));
    }

    return 0;

}