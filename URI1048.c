#include <stdio.h>

int main(){

    float num;
    scanf("%f",&num);

    if (num <= 400.00) {
        
        float inc = (num * 0.15);
        printf("Novo salario: %.2f\n",num + inc);
        printf("Reajuste ganho: %.2f\n",inc);
        printf("Em percentual: 15 %%\n");

    } else if (num <= 800.00) {
        
        float inc = (num * 0.12);
        printf("Novo salario: %.2f\n",num + inc);
        printf("Reajuste ganho: %.2f\n",inc);
        printf("Em percentual: 12 %%\n");
    
    } else if (num <= 1200.00) {
        
        float inc = (num * 0.10);
        printf("Novo salario: %.2f\n",num + inc);
        printf("Reajuste ganho: %.2f\n",inc);
        printf("Em percentual: 10 %%\n");
    
    } else if (num <= 2000.00) {
        
        float inc = (num * 0.07);
        printf("Novo salario: %.2f\n",num + inc);
        printf("Reajuste ganho: %.2f\n",inc);
        printf("Em percentual: 7 %%\n");
    
    }else if (num > 2000.00) {
        
        float inc = (num * 0.04);
        printf("Novo salario: %.2f\n",num + inc);
        printf("Reajuste ganho: %.2f\n",inc);
        printf("Em percentual: 4 %%\n");
    
    }
    

    return 0;
    

}