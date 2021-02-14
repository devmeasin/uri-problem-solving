#include <stdio.h>

int main() {
   
    int i, count = 0, sum = 0;

    while (1) {
        scanf("%d", &i);

            if (i > 0) {
                sum += i;
                count++;
            } else {
                break;
            }
    }

    printf("%.2f\n",(float)sum /(float)count);
        
     return 0;

}