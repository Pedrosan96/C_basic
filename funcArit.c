#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_CHARS 50

enum Elements{
  FIRE,
  WATER,
  WIND,
  EARTH,
  OTHER
};

enum Especie{
  PERRO,
  GATO,
  COCODRILO
};

struct mascota{
  int edad;
  int especie;
  char nombre[MAX_CHARS];
};

void hola(void);
int suma(int a, int b);
void saluda(const char *nombre);
void ejemplo1(void);
void imprime_elemento(int element);
void imprime_mascota(struct mascota m);

int main(void){
  struct mascota firulais;
  firulais.edad=2;
  firulais.especie=PERRO;
  strcpy(firulais.nombre, "Firulais");
  strcat(firulais.nombre, " kkkk");
  imprime_mascota(firulais);

return 0;
}

void hola(void){
printf("Hola mundo!\n");
}

int suma(int a, int b){
int c=a+b;
return c;
}

void saluda(const char *nombre){
printf("Hola %s", nombre);

}

void ejemplo1(){
  int a=40;
  int b=72;

  int resultado = suma(a,b);
  int resultado2 = suma(a,b), suma(resultado, a);
  printf("Resultado: %i", resultado2);

}

void imprime_elemento(int element){
  switch(element){
    case FIRE:
      printf("FUEGO!\n");
    break;
    case WATER:
      printf("WATER!\n");
    break;
    case WIND:
      printf("WIND!\n");
    break;
    case EARTH:
      printf("EARTH!\n");
    break;
    case OTHER:
      printf("OTHER!\n");
    break;
    default:
    printf("Elemento indefinido\n");
    break;
  }
}

void imprime_mascota(struct mascota m){
  printf("Nombre: %s\n",m.nombre);
  printf("Edad: %s\n", m.edad);
  switch (m.especie) {
    case PERRO:
    printf("Especie: PERRO\n");
    break;
    case GATO:
    printf("Especie: GATO\n");
    break;
    case COCODRILO:
    printf("Especie: COCODRILO\n");
    default:
    printf("Especie indefinida\n");
    break;
  }
}
