#include <stdio.h>

int main(){

    int value = 60;
    int i , j ;

    for (i = 1 , j = value; i <= value , j >= 0; i+= 3 , j -= 5) {

        printf("I=%d J=%d\n",i,j);

    }    

    return 0;
}