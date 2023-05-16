#include <stdio.h>

int main (void)
{


    for(int i = 1 ; i<= 30 ; i++ ){
        if(i%3 == 0 && i%5 != 0){
            printf("fizz \n");
        }else if(i%5 == 0 && i%3 != 0){
            printf("buzz \n");
        }else if(i%3 == 0 && i%5 == 0){
            printf("fizzbuzz \n");
        }else{
            printf("%d \n" , i);
        }
    }

}