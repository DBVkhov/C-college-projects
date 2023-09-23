/**Triangulo2***
Version corregida

Este programa dibuja un triangulo aproximadamente equilatero con asteriscos.
La altura del triangulo se lee como dato, en lineas de texto.

****************/

#include <stdio.h>

int main(){
  int altura;     /**lee altura**/

  printf("Altura?: ");
  scanf("%d", &altura);

  /**Imprimir vertice superior*/

  if (altura>0){
    for (int k = 1; k <= altura-1; k++){
      printf(" ");
    }
    printf("*\n");
  }

  /**Imprimir los bordes laterales**/

  for (int k = 2; k <= altura-1; k++){
    for (int j = 1; j <= altura-k; j++){
      printf(" ");
    }
    printf("*");
    for (int j=1; j <= 2*k-3; j++){
      printf(" ");
    }
    printf("*\n");
  }

  /**Imprimir el borde inferior**/
  if (altura>1){
    printf("*");
    for (int k=1; k<=altura-1; k++){
      printf(" *");
    }
    printf("\n");
  }
}
