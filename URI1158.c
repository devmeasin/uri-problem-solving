#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int i, loopCount = 0;

    while(1) {
        if (n == loopCount) {
            break;
        }
        int x , y;
        scanf("%d %d", &x , &y);
        int j = (x + y + y);
        int sum = 0;
        for (i = x; i < j ; i++ ) {
            if (i % 2 != 0) {
                sum += i;
            } 
        }

        printf("%d\n",sum); 

        loopCount++;
    }
    
    return 0;

}