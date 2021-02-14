#include <stdio.h>

int main(){
    
    int i , x , y ;

    while(1) {

        scanf("%d %d", &x , &y);

        if (x == y) break;

        if(x > y) printf("Decrescente\n");
        else printf("Crescente\n");
        
    }


    return 0;

}