#include <stdio.h>



    void somme_et_produit (int a, int b, int* pt_somme, int* pt_produit){
        *pt_somme = (a+b);
        *pt_produit = (a*b);

    }

    int main (void) {
        int a = 4;
        int b = 7;
        int somme;
        int* pt_somme = &somme;
        int produit;
        int* pt_produit = &produit;

        printf("%d , %d\n" , *pt_somme , *pt_produit);
        somme_et_produit(a , b, pt_somme , pt_produit);
        printf("%d , %d\n" , *pt_somme , *pt_produit);
        

    }