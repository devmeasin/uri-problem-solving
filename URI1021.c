#include <stdio.h>

int main(){

    double taka;

    scanf("%lf", &taka);

    int takaC = (taka * 100);

    int a, aa = (100.00 * 100);
    int b, bb = (50.00 * 100);
    int c, cc = (20.00 * 100);
    int d, dd = (10.00 * 100);
    int e, ee = (5.00 * 100);
    int f, ff = (2.00 * 100);


    int ax, ay = (1.00 * 100);
    int bx, by = (0.50 * 100);
    int cx, cy = (0.25 * 100);
    int dx, dy = (0.10 * 100);
    int ex, ey = (0.05 * 100);
    int fx, fy = (0.01 * 100);

    // Bank Note

    a = takaC / aa;
    takaC %= aa;

    b = takaC / bb;
    takaC %= bb;

    c = takaC / cc;
    takaC %= cc;

    d = takaC / dd;
    takaC %= dd;

    e = takaC / ee;
    takaC %= ee;

    f = takaC / ff;
    takaC %= ff;

    // Bank MOEDAS

    ax = takaC / ay;
    takaC %= ay;

    bx = takaC / by;
    takaC %= by;

    cx = takaC / cy;
    takaC %= cy;

    dx = takaC / dy;
    takaC %= dy;

    ex = takaC / ey;
    takaC %= ey;

    fx = takaC / fy;

    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);    	
    printf("%d nota(s) de R$ 50.00\n",b);    	
    printf("%d nota(s) de R$ 20.00\n",c);    	
    printf("%d nota(s) de R$ 10.00\n",d);    	
    printf("%d nota(s) de R$ 5.00\n",e);    	
    printf("%d nota(s) de R$ 2.00\n",f);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",ax);    	
    printf("%d moeda(s) de R$ 0.50\n",bx);    	
    printf("%d moeda(s) de R$ 0.25\n",cx);    	
    printf("%d moeda(s) de R$ 0.10\n",dx);    	
    printf("%d moeda(s) de R$ 0.05\n",ex);    	
    printf("%d moeda(s) de R$ 0.01\n",fx);    	
   
    return 0;

}