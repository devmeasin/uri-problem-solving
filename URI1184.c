#include <stdio.h>

int main() {

    int i, j, x, y, z = 10;
    double arr[12][12], sum = 0.0;
    int length = 12;
    char letter;
    scanf("%c",&letter);

    
    for(i = 0; i < length; i++) {
        for(j = 0; j < length; j++)
            scanf("%lf", &arr[i][j]);
    }

    for (x = 11; x >= 1; x--) {
        for(y = z; y >= 0; y--) {
            sum += arr[x][y];
        }
        z--;
    }
    
    if (letter == 'S') printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum / 66.00);

    return 0;

}


// Easy Way Fix 

/* #include <stdio.h>

int main() {

    int i, j, x, y, z = 1;
    double arr[12][12], sum = 0.0;
    int length = 12;
    char letter;
    scanf("%c",&letter);

    
    for(i = 0; i < length; i++) {
        for(j = 0; j < length; j++)
            scanf("%lf", &arr[i][j]);
    }


    for (x = 0; x < length - 1; x++) {
        for(y = z; y < length; y++) {
            sum += arr[y][x];
        }
        z++;
    }
    
    if (letter == 'S') printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum / 66.00);
    

    return 0;

} */