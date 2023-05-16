#include <stdio.h>

int main (void)
{

int tableau[3] = {5,4,7};
int tableau2[100];

  for (int i=0; i<3; i=i+1)
    {
      printf("tableau[%d] contient %d \n" , i , tableau[i]) ;
    }

  for (int i=0; i<100; i=i+1)
    {
      printf("tableau[%d] contient %d \n" , i , tableau2[i]) ;
    }


}