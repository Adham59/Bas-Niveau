#include <stdio.h>





void demande_valeur(char* entree, int taille){
    scanf("%s",entree);
}

int numero_colonne (char* entree, int taille){
    return entree[0]-'a';
}

int numero_ligne (char* entree, int taille){
    return entree[1]-'0';
}


char valeur_demande_tableau_2d (char* tableau, int nb_ligne, int nb_colonne){
    char entree[2];
    demande_valeur(entree,2);
    return tableau[numero_ligne(entree,2)*nb_colonne+numero_colonne(entree,2)];
}


int main(void){
    char tab[5];
    /*demande_valeur(tab,2);
    printf("%s \n" ,tab);*/
    /*numero_colonne(tab , 3);
    printf("%s" , tab);*/
    /*numero_ligne(tab , 3);
    printf("%s" , tab);*/
    /*valeur_demande_tableau_2d(tab , 2 , 5);
    printf("%s" , tab);*/


}