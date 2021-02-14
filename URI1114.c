#include <stdio.h>

int main(){

   int inputpass;

   while(1){

    scanf("%d",&inputpass);

    if (inputpass == 2002) {
        printf("Acesso Permitido\n");
        break;
    } else {
        printf("Senha Invalida\n");
    }

   }

    return 0;
}