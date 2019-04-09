#include <stdio.h>
#include <stdlib.h>
typedef struct eEmpleado

{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;



}eEmpleado;

int main()

{
    eEmpleado unEmpleado={1000, "martin", 'm' ,15000 ,12000} ;;

    puts(unEmpleado.nombre);
    return 0;
}
