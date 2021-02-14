#include <stdio.h>

int main(){

    int start, end, tmp;

    scanf("%d %d",&start,&end);

    if (start > end){
        
        tmp = 24 - start;

        printf("O JOGO DUROU %d HORA(S)\n" , tmp + end);
    
    } else if ( start == end){
        printf("O JOGO DUROU %d HORA(S)\n" , 24);
    } else {
        tmp = end - start;

        printf("O JOGO DUROU %d HORA(S)\n", tmp);
    }
    

    return 0;
}