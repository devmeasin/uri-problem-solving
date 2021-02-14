#include <stdio.h>

int main(){

    int x;

    scanf("%d",&x);

    if (61 == x) printf("Brasilia\n");
    else if (71 == x) printf("Salvador\n");
    else if (11 == x) printf("Sao Paulo\n");
    else if (21 == x) printf("Rio de Janeiro\n");
    else if (32 == x) printf("Juiz de Fora\n");
    else if (19 == x) printf("Campinas\n");
    else if (27 == x) printf("Vitoria\n");
    else if (31 == x) printf("Belo Horizonte\n");
    else printf("DDD nao cadastrado\n");
    

    return 0;

}