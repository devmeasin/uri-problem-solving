#include <stdio.h>
 int main()
{
    int a, sv, even = 0, odd = 0, pos = 0, neg = 0;
    
    for(a = 1; a <= 5; a++) {

        scanf("%d", &sv);
        if(sv % 2 == 0) even++;
        if(sv % 2 == 1 || sv % 2 == -1 ) odd++;
        if(sv > 0) pos++;
        if(sv < 0) neg++;
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}


// Error 5% 

/* #include <stdio.h>

int  a, b, c, d, e;
int  ab, bb, cb, db, eb;
int  ac, bc, cc, dc, ec;
int  ad, bd, cd, dd, ed;

int main(){

    int sa , sb , sc , sd , se;

    scanf("%d %d %d %d %d", &sa, &sb, &sc, &sd, &se );

        // This Program Cal Even Number
        if (sa % 2 == 0) {a = 1;} 
        if (sb % 2 == 0) {b = 1;} 
        if (sc % 2 == 0) {c = 1;}
        if (sd % 2 == 0) {d = 1;}
        if (se % 2 == 0) {e = 1;}
        else {
            a = 0;
            b = 0;
            c = 0;
            d = 0;
            e = 0;
       }

       // This Program Cal ODD Number
        if (sa % 2 == 1 || sa % 2 == -1) {ab = 1;} 
        if (sb % 2 == 1 || sb % 2 == -1) {bb = 1;}  
        if (sc % 2 == 1 || sc % 2 == -1) {cb = 1;}
        if (sd % 2 == 1 || sd % 2 == -1) {db = 1;}
        if (se % 2 == 1 || se % 2 == -1) {eb = 1;}
        else {
            ab = 0;
            bb = 0;
            cb = 0;
            db = 0;
            eb = 0;
       }

       // This Program Cal Positive Number
        if (sa > 0) {ac = 1;} 
        if (sb > 0) {bc = 1;}  
        if (sc > 0) {cc = 1;}
        if (sd > 0) {dc = 1;}
        if (se > 0) {ec = 1;}
        else {
            ac = 0;
            bc = 0;
            cc = 0;
            dc = 0;
            ec = 0;
       }

       // This Program Cal Negative Number
        if (sa <= -1) {ad = 1;} 
        if (sb <= -1) {bd = 1;}
        if (sc <= -1) {cd = 1;}
        if (sd <= -1) {dd = 1;}
        if (se <= -1) {ed = 1;}
        else {
            ad = 0;
            bd = 0;
            cd = 0;
            dd = 0;
            ed = 0;
       }


    int sumeven = a + b + c + d + e;
    int sumodd = ab + bb + cb + db + eb;
    int sumpos = ac + bc + cc + dc + ec;
    int sumneg = ad + bd + cd + dd + ed;

    printf("%d valor(es) par(es)\n", sumeven);
    printf("%d valor(es) impar(es)\n", sumodd);
    printf("%d valor(es) positivo(s)\n", sumpos);
    printf("%d valor(es) negativo(s)\n", sumneg);

    return 0;

} */