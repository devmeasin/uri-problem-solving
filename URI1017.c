#include <stdio.h>

int main(){
    
    int Hours , AverageSpeed; 

    scanf("%d %d",&Hours , &AverageSpeed);

    float FuelSpent = ((Hours * AverageSpeed) / 12.0);
    
    printf("%.3f\n", FuelSpent);

    return 0; 

}