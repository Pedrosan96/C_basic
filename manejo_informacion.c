#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#define MAX_CHAR 50

enum operacion{
  AGREGAR,
  MOSTRAR,
  MOSTRARTIPO
  ORDENAR,
  ELIMINAR,
  DEFUALT,
  SALIR
};

struct producto{
  unsigned int id;
  char *nombre;
  unsigned int precio;
  char *tipo;
  char *modelo;

};

typedef struct producto producto;
int menu(producto *prod, unsigned int *size);
void agregar_prod(producto *p, unsigned int *size);
void mostrar_prod(producto *p, unsigned int *size);
void ordenar_prod(producto *p, unsigned int *size);
void eliminar_prod(producto *p, unsigned int *size);
void default_prod(producto *p, unsigned int *size);


int main(void){
  unsigned int sizeProd = 0
  unsigned int *psize = sizeProd;
  producto *producto1 = NULL;
//  producto **producto1 = NULL;

/////MENU/////////
  menu(&producto, &size);
  return 0;

};

int menu(void){
  unsigned int operacion;

  printf("*********MENU**********\n");
  printf("1) Agregar produstos.\n2) Mostrar productos.\n3) Mostrar productos por tipo.\n4) Ordenar los productos.\n5) Eliminar producto.\n6) Usar productos default.\n 7) Salir.\n");
  scanf("%i\n", &operacion);
  switch (operacion) {
    case AGREGAR:
      agregarProd();
      break;
    case MOSTRAR:
      mostrarProd();
      break;
    case MOSTRARTIPO:
      mostrarTipo();
      break;
    case ORDENAR:
      ordenarProd();
      break;
    case ELIMINAR:
      eliminarProd();
      break;
    case DEFUALT:
      defaultProd();
      break;
    default:
      printf("Usted salió :(\n);
      return 0;
      break;
  }
return 0;
}

void agregar_prod(producto *p, unsigned int *s){
  do {
      p = realloc(p, (size + 1) * sizeof(producto));
      //p = realloc(p**, (size + 1) * sizeof(producto*));
      if(!p) {
          fprintf(stderr, "\n *** Error al adquirir memoria ***\n");
          exit(1);
      }

      //printf("\nIngrese el ID: ");
      //scanf("%i\n", &p->id);
      p->id=size;

      printf("\nIngrese el nombre del producto: ");
      scanf("%m[^\n]%*c", &p->nombre);

      printf("\nIngrese el precio del producto: ");
      scanf("%i", &p->precio);

      printf("\nIngrese el nombre del producto: ");
      scanf("%m[^\n]%*c", &p->tipo);

      printf("\nIngrese el nombre del producto: ");
      scanf("%m[^\n]%*c", &p->modelo);




      printf("Productos ingresados: %i\n", (strlen(p[size])));
      size=size+1;

      printf("\nPara continuar \"S\" para finalizar \"N\"....: ");
      scanf("%c%*[^\n]%*c", &salir);
  } while(salir != 'n' && salir != 'N');

  menu()


}
