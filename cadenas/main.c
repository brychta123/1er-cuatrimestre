#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  char palabra[10]="PHILIPA", otrapalabra[100]="programacion";

  int comp;

  //strupr lo convierte en mayuscula
  strlwr(palabra);//lo convierte en minuscula
  //comp=stricmp(palabra,"Philipa");
  printf("%s--",palabra);



  /*if(marca=="philipa")
  {
  printf("es igual");
  }
  else
  {
      printf("no es igual");
  }*/


  //strncpy(palabra, otrapalabra, 4 );

  //printf("ingrese nombre y apellido: ");
  //scanf("%[^\n]", palabra);

  //gets(palabra);
  //fgets(palabra,1024,stdin);

  //len =strlen(palabra);
  //palabra[len]='\0';
  //printf(" La palabra es %s\ncantidad: %d ", palabra, len);

    return 0;
}
