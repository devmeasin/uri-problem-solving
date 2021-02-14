#include <stdio.h>

int main(){
  
    double Salery , TotalSales , Total ;

    char EmployeName ;
    
    scanf("%s %lf %lf",&EmployeName , &Salery , &TotalSales);

    Total = ((TotalSales * .15) + Salery);

    printf("TOTAL = R$ %.2lf\n", Total);

    return 0; 
}