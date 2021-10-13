#include<stdlib.h>
#include <stdio.h>
#include<string.h>

void invertirFrase(char *p);


int main(void){

  char *frase = NULL    ;

  printf("Ingrese frase cualquiera: \n");
  scanf("%m[^\n]%*c", &frase);

  invertirFrase(frase);

frase = NULL;

return 0;

}

void invertirFrase(char *p){
  size_t sizeFrase = strlen(p);
  p = realloc(p, (sizeFrase) * 2);
  printf("Frase invertida: \n");
  for (size_t i = 0; i < (sizeFrase*2); i++) {
    p[sizeFrase+i]=p[(sizeFrase-1)-i];
  }

  printf("%s\n",&p[sizeFrase]);

}
