#include <stdio.h>

int main (void)
{

int a = 8;
int b = 5; 
int c = 4;

if(a<b && a<c){
    printf("La valeur la plus petite est %d \n" , a);
}
else if(b<a && b<c){

    printf("La valeur la plus petite est %d \n" , b);

}else{

    printf("La valeur la plus petite est %d \n" , c);

}




}