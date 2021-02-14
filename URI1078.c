#include <stdio.h>

int main(){
   
    int mul;    
    scanf("%d",&mul);

    for (int i = 1; i <= 10; i++) {
       printf("%d x %d = %d\n",i, mul, mul * i );
    }
    
    return 0;

}