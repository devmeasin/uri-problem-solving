#include <stdio.h>

int main(){
  
    int product1ID,product1Units, product2ID,product2Units;
    double product1Price , product2Price; 

    scanf("%d %d %lf" , &product1ID ,&product1Units , &product1Price);

    scanf("%d %d %lf" , &product2ID ,&product2Units , &product2Price);

    double TotalPurchase = (product1Units * product1Price) + (product2Units * product2Price);

    printf("VALOR A PAGAR: R$ %.2lf\n" , TotalPurchase);

    return 0; 
}