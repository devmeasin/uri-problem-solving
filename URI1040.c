#include <stdio.h>

int main(){

    double a, b, c, d, e;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    double aver1, aver2;

    aver1 = (((a * 2) + (b * 3) + (c * 4) + d ) / 10);

    printf("Media: %.1lf\n",aver1);

    if (aver1 >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if(aver1 < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        
        printf("Aluno em exame.\n");

        scanf("%lf", &e);

        printf("Nota do exame: %.1lf\n",e);

        aver2 = ((aver1 + e) / 2);

        if (aver2 >= 5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");

        printf("Media final: %.1lf\n",aver2);
        
    }

    return 0;

}