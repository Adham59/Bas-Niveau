#include <stdio.h>


    void test_pointeur(void) {
        int a = 1;
        int* pt_a;
        pt_a = &a;
        printf("%d , %p  \n" , a , pt_a);
        printf("%p , %d \n" , &a , *pt_a);
    }


    int plus_egal(int* pt_a , int b) {
        *pt_a = *pt_a + b;
        return *pt_a;
    }

    int fois_egal(int* pt_a, int b){
        *pt_a = *pt_a *  b;
        return *pt_a;
    }

    int main (void) {
        int a = 1;
        int b = 4;
        int* pt_a;
        pt_a = &a;
    
        /*test_pointeur();*/
    
        /*printf("%p --> %d\n", pt_a, *pt_a);
        plus_egal(pt_a , b);
        printf("%p --> %d\n", pt_a, *pt_a);*/

        printf("%p --> %d\n", pt_a, *pt_a);
        fois_egal(pt_a , b);
        printf("%p --> %d\n", pt_a, *pt_a);



    }