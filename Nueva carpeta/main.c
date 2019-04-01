#include <stdio.h>
#include <stdlib.h>
#define T 5
void cargarvector(int variable[]);

int main()
{
    int numero[T];
    int i;

    for(i=0; i<T;i++)
    {

    printf("ingrese un numero:");
    scanf("%d", &numero[i]);
    }
   for(i=0; i<T;i++)
    {
    printf("%d\n",numero[i]);
    }
   return 0;
  }
    void cargarvector(int numerosenteros[T])
{


    int i;

    for(i=0; i<T ;i++)
    {

    printf("ingrese un numero:");
    scanf("%d", &numerosenteros[i]);
    }
}


