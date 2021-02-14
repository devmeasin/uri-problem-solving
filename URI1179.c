#include <stdio.h>

int main() {

        int i , j;
        int par [5];
        int impar [5];
        int parCount = 0, imparCount = 0;
        int length = (sizeof(par) / sizeof(par[0]));

        for (i = 0; i < 15; i++) {
             
            int n;
            scanf("%d", &n);

            if(n % 2 == 0) par[parCount] = n , parCount++;
            if(n % 2 !=0) impar[imparCount] = n,imparCount++;

                if (parCount == 5) {
                    for(j = 0; j < length; j++) {
                        printf("par[%d] = %d\n",j,par[j]);
                        par[j] = 0;
                    }
                    parCount = 0;
                } 

                if (imparCount == 5) {
                    for(j = 0; j < length; j++) {
                       printf("impar[%d] = %d\n",j,impar[j]);
                       impar[j] = 0;
                    }
                    imparCount = 0;
                }
            
        }
    
        for(j = 0; j < length; j++) {
            if (impar[j] == 0) break; 
            printf("impar[%d] = %d\n",j,impar[j]);
            
        }
        
        for(j = 0; j < length; j++) {
            if (par[j] == 0) break; 
            printf("par[%d] = %d\n",j,par[j]);
            
        }


    return 0;

}