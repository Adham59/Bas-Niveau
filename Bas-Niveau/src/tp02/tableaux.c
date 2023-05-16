#include <stdio.h>


    void affiche_tableau (char* tableau, int taille){
        for(int i = 0 ; i<taille ; i++){
            printf(" %c" ,tableau[i]);
        }
        printf("\n");
    }

    void affice_tableau_pointeur(char* tableau , int taille){
        for(int i = 0 ; i<taille ; i++){
            printf("%p  ",&tableau[i]);
        }
        printf("\n");
    }

    void change_lettre (char* pt_lettre, char nouvelle_lettre){
        *pt_lettre = nouvelle_lettre;
    }



    int main(void){
        char tableau[6] = {'a','z','e','r','t','y'};
        affiche_tableau(tableau , 6 );
        affice_tableau_pointeur(tableau , 6);


        char nouvelle_lettre = {'z'};
        char* pt_lettre;
        pt_lettre = &nouvelle_lettre;
        change_lettre(pt_lettre , 'a' ); 
        printf("%c\n" , *pt_lettre);

    }