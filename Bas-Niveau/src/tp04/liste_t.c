#include <stdio.h> 
#include <stdlib.h> 



typedef struct liste_t{
char car;
struct liste_t* queue;
} liste_t;


liste_t* ajoute_element_a_la_fin (liste_t* liste, char car);
liste_t* add_element_au_debut(char c, liste_t* liste);
void affiche_liste(liste_t* liste);




int main(void){

    liste_t* liste = NULL;// = malloc(sizeof(liste_t));
    liste = ajoute_element_a_la_fin(liste,'a');



}



liste_t* add_element_a_la_fin(liste_t* liste, char c) {
    if(liste == NULL) {
        return add_element_at_begin(c, liste);
    }
    liste->queue = add_element_a_la_fin(liste->queue, c);
    return liste;
}



liste_t* add_element_au_debut(char c, liste_t* liste) {
    liste_t* new = malloc(sizeof(liste_t));
    new->c = c;
    new->queue = liste;
    return new;
}



void affiche_liste(liste_t* liste) {
    if(liste == NULL) {
        return;
    }
    printf("%c", liste->c);
    affiche_liste(liste->queue);
}

char tete_de_liste(liste_t* liste) {
    if(liste == NULL) {
        return '\0';
    }
    return liste->c;
}

liste_t* queue_de_liste(liste_t* liste) {
    if(liste == NULL) {
        return NULL;
    }
    return liste->queue;
}


int est_vide(liste_t* liste) {
    return liste == NULL;
}


int taille_de_liste(liste_t* liste) {
    if(liste == NULL) {
        return 0;
    }
    return 1 + taille_de_liste(liste->queue);
}

liste_t* supprimer_premier_element(liste_t* liste) {
    if(liste == NULL) {
        return NULL;
    }
    liste_t* new = liste->queue;
    free(liste);
    return new;
}

void libere_la_liste(liste_t* liste) {
    if(liste == NULL) {
        return;
    }
    libere_la_liste(liste->queue);
    free(liste);
}

liste_t* insert_caractere(liste_t* liste, char car, int position) {
    if(liste == NULL){
        return NULL;
    }
    liste->car = car;
    insert_caractere(liste , car , position);
    return liste;
}


liste_t* supprime_element(liste_t* liste, int position){
    if(liste == NULL){
        return NULL;
    }
    if(position == 0){
        return supprimer_premier_element(liste);
    }
    liste->queue = supprime_element(liste->queue , position - 1);
    return liste;
}

liste_t* supprimer_caractere(liste_t* liste, char car){
    if(liste == NULL){
        return NULL;
    }
    liste->car = NULL;
    liste = supprimer_caractere(liste , car);
    return liste;
}


int est_dans_la_liste(liste_t* liste , char car){
    if(liste == NULL){
        return 0;
    }
    if(liste->car == car){
        return 1;
    }

    liste = est_dans_la_liste(liste , car);
    return liste;

}
liste_t* inverse_ma_liste(liste_t* l) {
    if(is_empty(l)) { // Cas ou je suis à la fin de la liste
        return NULL;
    }
    if(is_empty(l->queue)) { // Cas ou je suis le dernier élément de la liste
        return l;
    }
    liste_t* new = inverse_liste(l->queue);
    l = add_element_at_end(new, l->c);
    return l;
}


int listes_sont_egales(liste_t* l1, liste_t* l2) {
    if(is_empty(l1) && is_empty(l2)) { // Cas ou les deux listes sont vides
        return 1;
    }
    if(is_empty(l1) || is_empty(l2)) { // Cas ou une des deux listes est vide
        return 0;
    }
    if(l1->c != l2->c) { // Cas ou les deux listes ne sont pas égales
        return 0;
    }
    return listes_sont_egales(l1->queue, l2->queue);
}


liste_t* concatenation_de_listes(liste_t* l1, liste_t* l2) {
    if(is_empty(l1)) { // Cas ou la première liste est vide
        return l2;
    }
    if(is_empty(l2)) { // Cas ou la deuxième liste est vide
        return l1;
    }
    l1->queue = concatenation_de_listes(l1->queue, l2);
    return l1;
}










