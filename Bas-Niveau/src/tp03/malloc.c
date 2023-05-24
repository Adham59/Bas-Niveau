#include <stdio.h> 
#include <stdlib.h> 




char* nouveau_tableau (int taille);
void initialise_tableau (char* tableau, int taille, char car);
void affiche_tableau (char* tableau, int taille);
void liberation_du_tableau (char* tableau);
void place_dans_tableau (char* tableau, int taille, int indice, char car);
char lecture_du_tableau (char* tableau, int taille, int indice);


int main(void)
{

    /*char* pt = malloc(4 * sizeof(char));
    for(int i = 0 ; i<4 ; i++){
        pt[i] = 'a' + i;
    }
    printf("*pt contient %s \n" , pt);
    printf("\n");


    char* tableau = malloc(4 * sizeof(char));
    initialise_tableau(tableau , 4 , 'a');
    affiche_tableau(tableau ,4 );
    liberation_du_tableau(tableau);
    printf("\n");*/

    char* tableau = malloc(4 * sizeof(char));

    place_dans_tableau(tableau, 4, 3, 'q');
    
    lecture_du_tableau(tableau, 4, 3);
    printf("%c\n", lecture_du_tableau(tableau, 4, 3));
}


char* nouveau_tableau (int taille){
    char* pt = malloc(taille * sizeof(char));
    return pt;
}


void initialise_tableau (char* tableau, int taille, char car){
    for(int i = 0 ; i<taille ; i++){
        tableau[i] = car + i;
    }
}

void affiche_tableau (char* tableau, int taille){
    for(int i = 0 ; i<taille ; i++){
        printf("%c" , tableau[i]);
    }
    printf("\n");

}


void liberation_du_tableau (char* tableau){
    free(tableau);
}

void place_dans_tableau (char* tableau, int taille, int indice, char car){
    if(indice >= taille || indice < 0){
        printf("erreur");
        exit(1);
    }
    tableau[indice] = car;
}

char lecture_du_tableau (char* tableau, int taille, int indice) {
    if (indice >= taille || indice < 0) {
        printf("erreur");
        exit(1);
    }
    // printf("%d\n" , tableau[indice]);
    return tableau[indice];
}





