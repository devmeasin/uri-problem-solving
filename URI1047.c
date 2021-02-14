#include <stdio.h>

int main(){

    int starthours, endhours, startmun, endmun, temph, tempm;

    scanf("%d %d %d %d",&starthours, &startmun, &endhours, &endmun);

    if (starthours > endhours && startmun > endmun){
        
        temph = 24 - starthours;
        tempm = 60 - startmun;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , temph + endhours , tempm + endmun);
    
    } else if ( starthours == endhours && startmun == endmun){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , 24 , startmun - endmun);
    
    } else {

        temph = endhours - starthours;
        tempm = endmun - startmun;

       if ( tempm < 0 ) {

        tempm = 60 + (endmun - startmun);
        temph--;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", temph , tempm);

       } else {

         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", temph , tempm);

       }
       
    }
    

    return 0;
    

}