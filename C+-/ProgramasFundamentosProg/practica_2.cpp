/*******************************************
* NOMBRE: #Danila#
* PRIMER APELLIDO: #Borisov#
* SEGUNDO APELLIDO: #Vakhov#
* DNI: #55369697A#
* EMAIL: #danilaborisovvakhov@gmail.com#
*******************************************/


/** PROGRAMA PRACTICA 2*/
/*ESTE PROGRAMA DIBUJA UN ROMBO*/

#include <stdio.h>

int main(){

  int longlado, nespacios, contespacios, altura, posa, posp, poso, contlinearombo, longlinearombo;

  printf("Escriba la longitud del lado del rombo exterior (0<=x<=20): ");

  scanf("%d", &longlado);

  if (longlado>20){
     longlado = 0;
  }

  altura = 1;

  printf("\n");

  while (altura < 2*longlado){

    nespacios=0; contespacios=1; contlinearombo=0; longlinearombo=0;

    if (altura <= longlado){

        nespacios=longlado-altura;
        longlinearombo=2*(longlado-nespacios)-1;

        while (contespacios<=nespacios){
          printf(" ");
          contespacios=contespacios+1;
        }

        posa=1; posp=2; poso=3; contlinearombo=1;

        while (contlinearombo <= longlinearombo){

          if (posa == contlinearombo){
            printf("@");
            if (((longlinearombo-posa*2)<=5) && (2*posa<(longlinearombo))){
              posa=(longlado-nespacios)*2-posa;
            }
            else {
              posa=posa+4;
            }

          }
          if ((posp == contlinearombo) && (longlinearombo>=2)){
            printf(".");
              posp=posp+2;

          }
          if ((poso == contlinearombo) && (longlinearombo>=5)){
            printf("o");
            if (((longlinearombo-poso*2)<=5) && (2*poso<(longlinearombo))){
              poso=(longlado-nespacios)*2-poso;
            }
            else {
              poso=poso+4;
            }

          }
          contlinearombo=contlinearombo+1;
        }

    }
    else{
      nespacios=altura-longlado;
      longlinearombo=2*(longlado-nespacios)-1;

        while (contespacios<=nespacios){
          printf(" ");
          contespacios=contespacios+1;
        }

        posa=1; posp=2; poso=3; contlinearombo=1;

        while (contlinearombo <= longlinearombo){

          if (posa == contlinearombo){
            printf("@");
            if (((longlinearombo-posa*2)<=5) && (2*posa<longlinearombo)){
              posa=(longlado-nespacios)*2-posa;
            }
            else {
              posa=posa+4;
            }

          }
          if ((posp == contlinearombo) && (longlinearombo>=3)){
            printf(".");
              posp=posp+2;

          }
          if ((poso == contlinearombo) && (longlinearombo>=5)){
            printf("o");
            if (((longlinearombo-2*poso)<=5) && (2*poso<(longlinearombo))){
              poso=(longlado-nespacios)*2-poso;
            }
            else {
              poso=poso+4;
            }

          }
          contlinearombo=contlinearombo+1;
        }
    }

    altura = altura + 1;
    printf("\n");
  }
}
