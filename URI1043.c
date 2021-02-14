#include<stdio.h>

int main() {

    float a , b , c , Perimetro , Area ;

    scanf("%f %f %f", &a, &b, &c);


    if (a < (b + c) && b < (c + a ) && c < (a + b)) {

        Perimetro = a + b + c;
        printf("Perimetro = %.1f\n" , Perimetro);

    } else {

        Area = ((a + b) * c) / 2;
        printf("Area = %.1f\n" , Area);
        
    }
    

    return 0;
}