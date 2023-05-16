#include <stdio.h>

int main (void)
{

int tableau[6] = {5,4,7,14,2,3};
int valeur = tableau[0];
int a;

for(int i = 0 ; i<6 ; i++ ){
    if(valeur < tableau[i]){
        valeur = tableau[i];
        a = i;
    }

}
printf("%d \n" , valeur);
printf("Elle se trouve en postion %d \n" , a);

}