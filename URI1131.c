#include <stdio.h>

int main() {
    
    int match = 0, teamA = 0, teamB = 0, Draws = 0 , win;
    int i , x , y;

        while (1) {

            scanf("%d %d", &x , &y);
            match++;
            
            if (x > y) teamA++, x = 0 , y = 0;
            else if (x == y) Draws++, x = 0 , y = 0;
            else teamB++, x = 0 , y = 0;

             printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&i);
            if(i==1)
                continue;
            if(i==2)
                break;  

        }

        printf("%d grenais\n",match);
        printf("Inter:%d\n",teamA);
        printf("Gremio:%d\n",teamB);
        printf("Empates:%d\n",Draws);

        if (teamA > teamB) printf("Inter venceu mais\n");
        else if (teamA == teamB) printf("Nao houve vencedor\n");
        else printf("Gremio venceu mais\n");     
                                  
   
    return 0;

}