/******************************************
* PROGRAMA: Ordenar3b
*
* Descripción:
*   Este programa ordena tres valores
*   los guarda ordenados de menor a mayor
*   en las mismas variables que se leen
*******************************************/

#include <stdio.h>
#include <math.h>

/**Procedimiento para ordenar datos*/
void OrdenarDos (float & y, float &z){
  float aux;

  if (y>z){
    aux=y;
    printf("%f= y > %f= z\n", aux, z);
    y=z;
    printf("y= %f\n", y);
    z=aux;
    printf("z= %f\n", z);
  }
}

/** Porcedimiento para leer un dato */
void LeerDato (int indice, float & dato){
  printf("¿Dato %1d? ", indice);
  scanf("%f", &dato);
}

/**Porgrama principal*/
int main(){
  float valorUno, valorDos, valorTres;    /*valores a aordenar*/
  char tecla;                             /*tecla de opcion*/

  tecla= 'S';
  while (tecla != 'N'){
    /*--leer los datos--*/{
      LeerDato(1, valorUno);
      LeerDato(2, valorDos);
      LeerDato(3, valorTres);
    }
    /*--ordenar datos--*/{
      OrdenarDos(valorUno, valorDos);
      OrdenarDos(valorUno, valorTres);
      OrdenarDos(valorDos, valorTres);
    }
    /*--escribir resultados--*/{
      printf("\nDatos Ordenados = \n");
      printf("%7.2f %7.2f %7.2f\n", valorUno, valorDos, valorTres);
    }
    /*--comprobar si se continua--*/{
      tecla=' ';
      printf("\n¿desea continuar(S/N)?");
      while ((tecla != 'S') && (tecla != 'N')){
        scanf("%c", &tecla);
      }
    }
  }
}


