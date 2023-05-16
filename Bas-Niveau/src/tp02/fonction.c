#include <stdio.h>

    void affiche_entier(int n);
    int produit(int a, int b);
    void modifie_a(int a);


    void affiche_entier (int n){
        printf("La fonction vous affcihe l'entier %d \n", n);
    }

    int produit(int a, int b){
        return a*b;
    }

    void modifie_a(int a){
        a = a +1;
        printf("%d \n", a);
    }





    int main (void){

        affiche_entier(3);
        affiche_entier(produit(5,3));
        modifie_a(3);

    }
