#include <stdio.h>

int main (void)
{

    float devise = 60 ; 
    float taux_change = 1.09;

    printf("Alice et Bob ont %.2f euros apres conversion \n" , devise * taux_change);
    printf("Ils gardent donc %.2f euros chacun \n" , devise * taux_change / 2 );

}