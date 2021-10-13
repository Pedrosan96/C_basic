#include<stdlib.h>
#include<stdio.h>
#include <string.h>

#define MAX_PERSONAS 5
#define MAX_CHAR 50

struct persona{
  char nombre[MAX_CHAR];
  int edad;
  char tipo[MAX_CHAR];
};

void ingresarDatos(struct persona *p);
void imprimirPersona(struct persona *p);
void consumirNuevaLinea(void);


int main(void){
  struct persona vector1[5];
  struct persona *pvector1;
  pvector1= &vector1[0];
  printf("****Ingresa los datos personaes de las personas de la escuela****\n");
  printf("Estos datos incluyen Nombre, edad y tipo(ALUMNO, PROFESOR y DIRECTOR)\n");
  ingresarDatos(pvector1);
  printf("Las personas ingresadas son:\n");
  imprimirPersona(pvector1);


   return 0;
}

void ingresarDatos(struct persona *p){
  for (int i = 0; i < MAX_PERSONAS; i++) {
    printf("Nombre: ");
    fgets(p->nombre, MAX_CHAR, stdin);
    consumirNuevaLinea();
    if ((strlen(p->nombre) > 0) && (p->nombre[strlen(p->nombre) - 1] == '\n'))
    {
        p->nombre[strlen(p->nombre) - 1] = '\0';
    }

    printf("Edad: ");
    scanf("%i",&p->edad);

    printf("Tipo: ");
    scanf("%s",&p->tipo);
    consumirNuevaLinea();
    p++;

  }
  printf("\n\n");
}


void imprimirPersona(struct persona *p){
  for (int i = 0; i < MAX_PERSONAS; i++) {
    printf("Nombre: %s\n", p->nombre);
    printf("Edad: %i\n", p->edad);
    printf("Tipo: %s\n", p->tipo);
    p++;
    printf("\n");
  }
}

void consumirNuevaLinea(void)
{
    int c;
    do{
      c = getchar();
    } while (c != EOF && c != '\n');
}
