#include <stdio.h>

int main(){
    
    float i , j , x , y;

    for (i = 0.0,y = 1.0; i <= 2.1 ; i += 0.2, y += 0.2 ) {

        for (x = 1.0 , j = y ; x <= 3.0 ; x++, j++) {

            if (i== 0.0 || i == 1.0 || i > 1.9) {
                printf("I=%d J=%d\n",(int)i,(int)j); 
            } else {
                printf("I=%.1f J=%.1f\n",i,j);
            }
            
        }
               
    }    

    return 0;
}