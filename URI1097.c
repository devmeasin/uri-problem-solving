#include <stdio.h>

int main(){
    
    int i , j , x , y;

    for (i = 1,y = 7; i <= 9 ; i += 2, y += 2 ) {

        for (x = 1 , j = y ; x <= 3 ; x++, j--) {

            printf("I=%d J=%d\n",i,j);
            
        }
               
    }    

    return 0;
}