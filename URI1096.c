#include <stdio.h>

int main(){

    
    int i , j , x;

    for (i = 1 ; i <= 9 ; i += 2 ) {

       for (x = 1 , j = 7; x <= 3,j >=5 ; x++, j--) {

            printf("I=%d J=%d\n",i,j);
       
       }

    }    

    return 0;
}