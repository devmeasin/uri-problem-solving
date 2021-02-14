#include <stdio.h>

int main(){

    int employeID , workedhours ;
   
    float hourlypay;
    
    scanf("%d %d %f",&employeID,&workedhours,&hourlypay);

    printf("NUMBER = %d\n", employeID);

    printf("SALARY = U$ %.2f\n", (workedhours * hourlypay));

    return 0;
}