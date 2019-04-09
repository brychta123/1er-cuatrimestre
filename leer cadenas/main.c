#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pedircadena(char[],char[],int[]);
void validarTamañocadena(char[],char[],int[]);

int main()
{
    char nombre[20];
    char apeliido[20];
    char apellidoNombre[41];

    char auxCadena[100];

    pedirCadena("ingrese nombre: ", auxCadena);

    while(strlen(auxCadena))
    {
        printf("reingrese su nombre; ");
        scanf("%[^\n]", auxCadena);

    }

    strcpy(nombre , auxCadena);
    pedirCadena("ingrese apellido")

    return 0;
}
void pedircadena(char mensaje[], char cadena[],int [])
{
    printf("%s", mensaje);
    scanf("%[^\n]", cadena);
    validarTamañocadena()
}
