#include <stdio.h>


int main(){

    char animal [30];
    scanf("%s",animal);

    if (animal[0] == 'v') {

      char animal [30];
      scanf("%s",animal);
       
       if (animal[0] == 'a') {
           
            char animal [30];
            scanf("%s",animal);

            if (animal[0] == 'c') printf("aguia\n");
            else  printf("pomba\n");

       } else {

            char animal [30];
            scanf("%s",animal);
            if (animal[0] == 'o') printf("homem\n");
            else printf("vaca\n");

       }


    } else {

         char animal [30];
         scanf("%s",animal);
       
         if (animal[0] == 'i') {
            
                char animal [30];
                scanf("%s",animal);

                if (animal[2] == 'm') {
                    printf("pulga\n");
                } else {
                    printf("lagarta\n");
                }

         } else {

                char animal [30];
                scanf("%s",animal);

                if (animal[0] == 'h') {
                    printf("sanguessuga\n");
                } else {
                    printf("minhoca\n");
                }
            
        }

    }
    

    return 0;
    

}