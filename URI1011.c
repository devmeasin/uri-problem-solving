#include <stdio.h>

int main(){
  
    int UserInput;
    double PI = 3.14159 , Sphere;

    scanf("%d" , &UserInput);

    Sphere = (4/3.0) * PI * UserInput * UserInput * UserInput;
    
    printf("VOLUME = %.3lf\n", Sphere);

    return 0; 
}