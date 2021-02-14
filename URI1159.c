#include <stdio.h>

int main() {

    int i, x;
    while(1) {
       
        scanf("%d", &x);
        if (x == 0)
            break;
       
        int sum = 0;
        int j = x + 10;
        for (i = x; i < j ; i++ ) {
            if (i % 2 == 0) sum += i;
        }
        printf("%d\n",sum); 

    }
    
    return 0;

}