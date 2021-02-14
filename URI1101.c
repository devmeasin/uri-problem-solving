#include <stdio.h>

int main(){
    
    int i , M , N , a , b ;

    while(1){
        
        scanf("%d %d",&M , &N);

        if (M == 0 || M < 0 || N == 0 || N < 0) break;

        if (M > N) {

                int sum = 0;
                int temp = M;
                M = N;
                N = temp;

                for ( a = M; a <= N; a++) {
                    printf("%d ", a);
                    sum += a;     
                }

                printf("Sum=%d\n",sum);

        } else {

                int sum = 0;

                for ( a = M; a <= N; a++) {
                    printf("%d ", a);
                    sum += a;     
                }

                printf("Sum=%d\n",sum);

        }
        
    }    

    return 0;

}