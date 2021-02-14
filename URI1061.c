#include <stdio.h>

int main(){

    char st [5];
    char dot [5];

    int std, sth, stm, sts;

    scanf("%s %d %d %s %d %s %d",st, &std, &sth, dot, &stm, dot, &sts);

    char en [5];
    int end, enh, enm, ens;

    scanf("%s %d %d %s %d %s %d",en , &end, &enh, dot, &enm, dot, &ens);



    int stdata = (sts + (stm * 60) + (sth * 60 * 60) + (std * 24 * 60 * 60));

    int endata = (ens + (enm * 60) + (enh * 60 * 60) + (end * 24 * 60 * 60));

    int data;
    if (stdata > endata) {
        data = stdata - endata;
    } else {
        data = endata - stdata;
    }

    int W = data /( 24 * 60 * 60);
    int X = ((data - W * 24 * 60 * 60)  / (60 * 60));
    int Y = ((data - W * 24 * 60 * 60 - X * 60 * 60 )/ 60);
    int Z = (data - W * 24 * 60 * 60 - X * 60 * 60 - Y * 60);


    printf("%d dia(s)\n", W);
    printf("%d hora(s)\n", X);
    printf("%d minuto(s)\n", Y);
    printf("%d segundo(s)\n", Z);


    return 0;

}