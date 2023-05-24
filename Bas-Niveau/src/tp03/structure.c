#include <stdio.h> 
#include <stdlib.h> 



typedef struct {
    char* tableau;
    int taille;
}super_tableau_t;

typedef super_tableau_t chaine_t;





int chaine_est_valide(chaine_t* chaine){
    for(int i = 0 ; i<chaine->taille ; i++){
        if(chaine->tableau[i] == '\0'){
            return 1;
        }
    }
    return 0;
}


void affiche_chaine(chaine_t* chaine){
    if(chaine_est_valide(chaine) == 1){
        for(int i = 0 ; i<chaine->taille ; i++){
            printf("%c" , chaine->tableau[i]);
        }
    }
    printf("\n");
}

int taille_de_la_chaine(chaine_t* chaine){
    int cpt = 0;
    if(chaine_est_valide(chaine) == 0){
        return -1;
    }
    for(int i = 0 ; i<chaine->taille ; i++){
        if( chaine-> tableau[i] != '\0'){
            cpt++;
        }
    }
    return cpt;
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


super_tableau_t* nouveau_super_tableau(int taille){
    super_tableau_t* super_tab = malloc(sizeof(super_tableau_t));
    super_tab->taille = taille;
    super_tab->tableau = nouveau_tableau(taille);
    return super_tab;
}

void initialise_super_tableau(super_tableau_t* super_tab , char car){
    for(int i = 0 ; i<super_tab->taille ; i++){
        super_tab->tableau[i] = car + i;
    }
}


void affiche_super_tableau(super_tableau_t* super_tab){
    for(int i = 0 ; i<super_tab->taille ; i++){
        printf("%c" , super_tab->tableau[i]);   
    }
    printf("\n");
}


void liberation_du_super_tableau(super_tableau_t* super_tab){
    free(super_tab->tableau);
    free(super_tab);
}

void place_dans_super_tableau (super_tableau_t* super_tab, int indice, char car){
    if(indice > super_tab->taille){
        printf("indice trop grand\n");
        exit(1);
    }
    super_tab->tableau[indice] = car;
}

char lecture_du_super_tableau (super_tableau_t* super_tab , int indice){
    if(indice > super_tab->taille){
        printf("indice trop grand\n");
        exit(1);
    }
    return super_tab->tableau[indice];   
}


int taille_super_tableau(super_tableau_t* super_tab){
    return super_tab->taille;
}


void allonge_tableau_de_la_chaine(chaine_t* chaine ){
    chaine->taille = chaine->taille + 1;
    chaine->tableau = realloc(chaine->tableau , chaine->taille * sizeof(char));  
    chaine->tableau[chaine->taille] = '\0';  
}


void ajouter_caractere(chaine_t* chaine , char car){
    if(chaine_est_valide(chaine) == 1 && taille_de_la_chaine(chaine) <= chaine->taille)
    {
        allonge_tableau_de_la_chaine(chaine);    
    }
    place_dans_super_tableau(chaine , taille_de_la_chaine(chaine) , car);
}



int main(void){

/*super_tableau_t* super_tab = malloc(sizeof(super_tableau_t));
super_tab->taille = 4;
super_tab->tableau = nouveau_tableau(4);
initialise_tableau(super_tab->tableau , 4 , 'a');
affiche_tableau(super_tab->tableau ,4 );*/


super_tableau_t* super_tab = nouveau_super_tableau(4);
initialise_super_tableau(super_tab , 'a');
/*super_tab->tableau[3] = 'e';
affiche_super_tableau(super_tab);
liberation_du_super_tableau(super_tab);
affiche_super_tableau(super_tab);*/

/*place_dans_super_tableau(super_tab, 4, 3, 'q');
printf("%c\n" , lecture_du_super_tableau(super_tab, 3));*/

/*printf("%i\n", chaine_est_valide(super_tab));
printf("%i\n",taille_de_la_chaine(super_tab));
affiche_chaine(super_tab);*/

/*chaine_t* chaine = nouveau_super_tableau(10);*/

/*place_dans_super_tableau(chaine, 10, 0, 't');
place_dans_super_tableau(chaine, 10, 1, 'o');
place_dans_super_tableau(chaine, 10, 2, 't');
place_dans_super_tableau(chaine, 10, 3, '\0');
ajouter_caractere1(chaine,'o');
affiche_chaine(chaine);
liberation_du_super_tableau(chaine);*/

chaine_t* chaine = nouveau_super_tableau(5);
place_dans_super_tableau(chaine, 0, '\0');
printf("%i\n" , taille_de_la_chaine(chaine));
printf("%i\n" , chaine->taille);
//printf("%i" , taille_de_la_chaine(chaine));
ajouter_caractere(chaine,'a');
//printf("%i" , taille_de_la_chaine(chaine));
ajouter_caractere(chaine,'b');
ajouter_caractere(chaine,'c');
ajouter_caractere(chaine,'d');

affiche_super_tableau(chaine);












}