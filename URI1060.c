#include <stdio.h>

int  a , b , c , d, e, f;

int main(){

    double sa , sb , sc , sd , se , sf;

    scanf("%lf %lf %lf %lf %lf %lf", &sa, &sb, &sc, &sd, &se , &sf);

        if (sa > 0) { a = 1; } 
        if (sb > 0) {b = 1; }  
        if (sc > 0) {c = 1;}
        if (sd > 0) {d = 1;}
        if (se > 0) {e = 1;}
        if (sf > 0) {f = 1;}
        else {
            a = 0;
            b = 0;
            c= 0;
            d= 0;
            e= 0;
            f= 0;
       }

     int sum = a + b + c + d + e + f;

    printf("%d valores positivos\n", sum);

    return 0;

}