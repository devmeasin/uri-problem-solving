#include <stdio.h>

int main(){

    float num;
    scanf("%f",&num);

    if (num <= 2000.00) {
        
        printf("Isento\n");

    } else if (num <= 3000.00) {
        
        float taxsub = (num - 2000.00);
        float tax = (taxsub * 0.08);
        printf("R$ %.2f\n",tax);

    } else if (num <= 4500.00) {
        
        float taxsub = (num - 3000.00);
        float tax = (taxsub * 0.18);
        printf("R$ %.2f\n", 80.00 + tax);
    
    } else if (num > 4500.00) {

        float taxsub = (num - 4500.00);
        float tax = (taxsub * 0.28);
        printf("R$ %.2f\n",350.00 + tax);
    
    } 
    
    return 0;

}