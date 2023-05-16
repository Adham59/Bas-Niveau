#include <stdio.h>
void affiche_caractere (char car);
void alphabet_ (char* tableau, int taille);
void alphabet_renverse (char* tableau, int taille);
void change_lettre (char* pt_lettre, char nouvelle_lettre);

int i;

int main(void){
    char tableau[26];
    alphabet_renverse(tableau,26);
    printf(tableau);
    printf("\n");
    change_lettre(&tableau[5],'\0');
    printf(tableau);
    printf("\n");
    change_lettre(&tableau[2],'f');
    printf(tableau);
    printf("\n");
    change_lettre(&tableau[9],'p');
    printf(tableau);
    printf("\n");
    change_lettre(&tableau[11],'\0');
    printf(tableau);
    printf("\n");
    change_lettre(&tableau[3],'\0');
    printf(tableau);
    printf("\n");
}

void affiche_caractere (char car){
    printf("%c\n%d\n",car,car);
}

void alphabet (char* tableau, int taille){
    for (i = 0; i < taille ; i++){
        tableau[i] = 'a'+i;
    }
}

void alphabet_renverse (char* tableau, int taille){
    for (i = 0; i < taille ; i++){
        tableau[i] = 'z'-i;
    }
}

void change_lettre (char* pt_lettre, char nouvelle_lettre){
    *pt_lettre = nouvelle_lettre;
}








