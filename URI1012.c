#include <stdio.h>

int main(){
    
    double triangle , circle , trapezoid , square, rectangle;

    double A , B , C;

    double PI = 3.14159;

    scanf("%lf %lf %lf" , &A , &B , &C);

    triangle = ((A * C) / 2);

    circle = (PI * (C * C));

    trapezoid = (((A + B) / 2) * C);

    square = (B * B);

    rectangle = (A * B);

    printf("TRIANGULO: %.3lf\n" , triangle);
    printf("CIRCULO: %.3lf\n" , circle);
    printf("TRAPEZIO: %.3lf\n" , trapezoid);
    printf("QUADRADO: %.3lf\n" , square);
    printf("RETANGULO: %.3lf\n" , rectangle);

    return 0; 
}