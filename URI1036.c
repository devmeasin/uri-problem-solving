#include <stdio.h>
#include <math.h>

int main(){

    double A , B , C , X ;

    scanf("%lf %lf %lf",&A , &B , &C );

    X = ((B * B) - (4 * A * C) );

    if (X < 0 || A == 0 ){
        printf("Impossivel calcular\n");
    } else {   

        double AddBf = (- B + sqrt(X)) / (2 * A);
        double SubBf = (- B - sqrt(X)) / (2 * A);

        printf("R1 = %.5lf\nR2 = %.5lf\n" , AddBf, SubBf );

    }

    return 0;

}