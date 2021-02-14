#include <stdio.h>

int main(){
   
    int n;
    scanf("%d",&n);
    float a, b, c;
   
    for (int i = 1; i <= n; i++) {
  
        scanf("%f %f %f",&a,&b,&c);
  
        float total = a * 2.0 + b * 3.0 + c * 5.0;
    
        printf("%.1f\n",total / 10.0);
  
    }

    return 0;

}