#include <stdio.h>
#include <stdlib.h>
#define T 3





//defino la estructura
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
} eEmpleado;

void mostrarEmpleado(eEmpleado);


int main()

{
    eEmpleado lista[T];

   int i;
   for(i=0; i<T; i++)



   {






    printf("Ingrese legajo: ");
    scanf("%d", &lista[i].legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(lista[i].nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &lista[i].sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &lista[i].sueldoBruto);
    lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;

}
for(i=0; i<T; i++)
{
    mostrarEmpleado(lista[i]);
}
return 0;
}
void mostrarEmpleado(eEmpleado unEmpleado)
  {

    printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

  }



