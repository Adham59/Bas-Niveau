#include <stdio.h> 
#include <stdlib.h> 


void exemple_tableau(char* tableau , int taille);
void exemple_pointeur(void);


int main (void){
    int taille = 3;
    char tableau[3] = {'a' , 'c' , 'b'};
    exemple_tableau(tableau , taille);

}



void exemple_pointeur(void){
    int ma_variable = 5;
    printf("%d" , ma_variable);
    printf("%p" , &ma_variable);
    int* pt_variable = &ma_variable;
    printf("%p" , pt_variable);
    printf("%i" , *pt_variable);

}


void exemple_tableau(char* tableau , int taille){
    printf("%p" , &tableau[taille - 2]);
    printf("\n");
    printf("%c" , tableau[taille - 2 ]);
    printf("\n");
}

