#include <stdio.h>

int main() {

        int size;

        scanf("%d",&size);

        char letter;

        int coelho = 0, rato = 0, sapo = 0, storevalue;

        for (int i = 1; i <= size; i++) {   
            scanf("%d %c", &storevalue, &letter);

            if (letter == 'C') {
                coelho += storevalue;
            } else if (letter == 'R') {
                rato += storevalue;
            }else if (letter == 'S'){
                sapo += storevalue;
            }
            
        }

        int total = coelho + rato + sapo;
        printf("Total: %d cobaias\n",total);

        printf("Total de coelhos: %d\n",coelho);
        printf("Total de ratos: %d\n",rato);        
        printf("Total de sapos: %d\n",sapo);



        float coelhos = (100.00 * coelho / total);
        float ratos = (100.00 * rato / total);
        float sapos = (100.00 * sapo / total);

        printf("Percentual de coelhos: %.2f %%\n",coelhos);
        printf("Percentual de ratos: %.2f %%\n",ratos);
        printf("Percentual de sapos: %.2f %%\n",sapos);


        return 0;

}