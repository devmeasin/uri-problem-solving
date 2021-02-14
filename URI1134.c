#include <stdio.h>

int main() {
   
    int i , Alcool = 0 , Gasolina = 0 , Diesel = 0;

    while(1) {
        scanf("%d", &i);

        if (i == 4)
            break;
        else if(i == 1) Alcool++;
        else if(i == 2) Gasolina++;
        else if(i == 3) Diesel++;
        else
            continue;
        
    }
 
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",Alcool);
    printf("Gasolina: %d\n",Gasolina);
    printf("Diesel: %d\n",Diesel);

    return 0;

}