#include <stdio.h>

int main() {

    float i, S = 0;
    for (i = 1; i <= 100; i++) 
            S += (1/i);

    printf("%.2f\n", S);
    return 0;

}

/* #include <stdio.h>

int main() {

    int i;
    float S = 0 ,n = 1.0;

    for (i = 1; i <= 100 ; i++) {

        S += (1/n);
        ++n;
      
   }

    printf("%.2f\n", S);
    
    return 0;

}
 */