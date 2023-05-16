#include <stdio.h>
char valeur_tableau_2d (char* tableau, int nb_ligne, int nb_colonne,int pos_ligne, int pos_colonne);
void affiche_tableau_2d (char* tableau, int nb_ligne, int nb_colonne);
void place_valeur_tableau_2d (char* tableau, int nb_ligne, int nb_colonne,int pos_ligne, int pos_colonne, char car);
int i;
int j;

int main(void){
    char tab[16] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    affiche_tableau_2d(tab, 4, 4);
    place_valeur_tableau_2d (tab,4,4,1,0,'z');
    printf("\n");
    affiche_tableau_2d(tab, 4, 4);
    place_valeur_tableau_2d (tab,4,4,0,3,'p');
    printf("\n");
    affiche_tableau_2d(tab, 4, 4);

}

char valeur_tableau_2d (char* tableau, int nb_ligne, int nb_colonne,int pos_ligne, int pos_colonne){
    return tableau[pos_ligne * nb_colonne + pos_colonne];
}

void affiche_tableau_2d (char* tableau, int nb_ligne, int nb_colonne){
    for (i = 0 ; i < nb_ligne; i++){
        for(j = 0 ; j < nb_ligne; j++){
            printf("%c ",valeur_tableau_2d(tableau,nb_ligne, nb_colonne,i,j));
        }
        printf("\n");
    }
}

void place_valeur_tableau_2d (char* tableau, int nb_ligne, int nb_colonne,int pos_ligne, int pos_colonne, char car){
    tableau[pos_ligne * nb_colonne + pos_colonne] = car; 
}