#include <stdio.h>
#include <stdlib.h>

int pedirNota(void);

float sacarPromedio(int suma, int cantidad);

int aprobarMateria( int notaMinima, int nota);


int main()
{
    int nota;
    nota=aprobarMateria(11,15);

   /* int suma =17;
    int cantidad=2;
    float promedio;
    promedio=sacarPromedio(suma,cantidad);
    printf("El promedio es: %f",promedio);*/


}
int pedirNota(void)
{
   int nota;
   do
   {
      printf("Ingrese su nota entre 0 y 10");
      scanf("%d", &nota);
   }while(nota<0||nota>10);

   return nota;
}

    float sacarPromedio(int suma, int cantidad)
    {
        float promedio;
        promedio =(float)suma/cantidad;
        return promedio;

    }
    int aprobarMateria(int nota, int notaMinima)
    {

        if(nota>notaMinima)
        {
           return 1;
        }else
        {
        return 0;
        }
    }
