#include <stdio.h>

int  a , b , c , d, e;

int main(){

    int sa , sb , sc , sd , se  ;

    scanf("%d %d %d %d %d", &sa, &sb, &sc, &sd, &se );

        if (sa % 2 == 0) {a = 1;} 
        if (sb % 2 == 0) {b = 1;}  
        if (sc % 2 == 0) {c = 1;}
        if (sd % 2 == 0) {d = 1;}
        if (se % 2 == 0) {e = 1;}
        else {
            a = 0;
            b = 0;
            c= 0;
            d= 0;
            e = 0;
       }

    int sum = a + b + c + d + e ;

    printf("%d valores pares\n", sum);

    return 0;

}