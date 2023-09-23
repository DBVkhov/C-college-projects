/*******************************************
* NOMBRE: #Danila#
* PRIMER APELLIDO: #Borisov#
* SEGUNDO APELLIDO: #Vakhov#
* DNI: #55369697A#
* EMAIL: #danilaborisovvakhov@gmail.com#
*******************************************/

/**PRACTICA 3*/
/*Este programa muestra el calendario de un mes sekeccionado entre los años 1601 y 2999*/

#include <stdio.h>

int main(){

  int mes, contmes, anno, dias, diasantesdelmes, diashastafinaldemes, diasmes, puntos1, puntos2, contcalendario;
  int contdiasemana, numerocalendario, contanno, diasannos;

  printf("Indique el mes del calendario (1-12): ");

  scanf("%d", &mes);

  if (mes>12){
    mes = 0;
  }
  else{

  printf("Indique el año del mes del calendario (1601-3000): ");

  scanf("%d", &anno);

  if ((anno<1601)||(anno>3000)){
    anno = 0;
  }
  else{

  contanno=1601;

  diasannos= 0;

  dias= 0;

  while (contanno < anno){

  contmes=1;

    while(contmes<=12){

      if ((contanno % 4 == 0) && (contanno % 100 != 0) && (contanno % 400 != 0) && (contmes == 2)){
      dias=29;
      }
      else if ((contanno % 4 == 0) && (contanno % 100 == 0) && (contanno % 400 == 0) && (contmes == 2)){
      dias=29;
      }
      else if (contmes == 2){
      dias= 28;
      }
      else if((contmes == 4)||(contmes == 6)||(contmes == 9)||(contmes == 11)){
      dias=30;
      }
      else{
      dias=31;
      }

      contmes= contmes + 1;
      diasannos = diasannos + dias;

    }
    contanno = contanno + 1;
  }


  dias = 0;

  contmes= 1;

  diashastafinaldemes= 0;

  while(contmes<=mes){

    if ((anno % 4 == 0) && (anno % 100 != 0) && (anno % 400 != 0) && (contmes == 2)){
      dias=29;
    }
    else if ((anno % 4 == 0) && (anno % 100 == 0) && (anno % 400 == 0) && (contmes == 2)){
      dias=29;
      }
    else if (contmes == 2){
      dias= 28;
    }
    else if ((contmes == 4)||(contmes == 6)||(contmes == 9)||(contmes == 11)){
      dias=30;
    }
    else{
      dias=31;
    }

    contmes= contmes + 1;
    diashastafinaldemes = diashastafinaldemes + dias;

  }



  dias = 0;

  diasantesdelmes= 0;

  contmes= 1;

  while(contmes<mes){

    if ((anno % 4 == 0) && (anno % 100 != 0) && (anno % 400 != 0) && (contmes == 2)){
      dias=29;
    }
    else if ((anno % 4 == 0) && (anno % 100 == 0) && (anno % 400 == 0) && (contmes == 2)){
      dias=29;
      }
    else if (contmes == 2){
      dias= 28;
    }
    else if ((contmes == 4)||(contmes == 6)||(contmes == 9)||(contmes == 11)){
      dias=30;
    }
    else{
      dias=31;
    }
      contmes= contmes + 1;

      diasantesdelmes= diasantesdelmes + dias;

  }


  diasantesdelmes = diasantesdelmes + diasannos;
  diashastafinaldemes = diashastafinaldemes + diasannos;


  puntos1= diasantesdelmes % 7;

  puntos2= 7-(diashastafinaldemes % 7);

  if (puntos2 == 7){
    puntos2= 0;
  }


  if ((anno % 4 == 0) && (anno % 100 != 0) && (anno % 400 != 0) && (mes == 2)){
      diasmes=29;
    }
    else if ((anno % 4 == 0) && (anno % 100 == 0) && (anno % 400 == 0) && (mes == 2)){
      diasmes=29;
    }
    else if (mes == 2){
      diasmes= 28;
    }
    else if((mes == 4)||(mes == 6)||(mes == 9)||(mes == 11)){
      diasmes=30;
    }
    else{
      diasmes=31;
    }

printf("\n");

    if (mes == 1){
      printf("ENERO");
      for (int indice=1; indice<=(27-4-5); indice++){
        printf(" ");
      }
      printf("%d", anno);
    }

    if (mes == 2){
      printf("FEBRERO");
      for (int indice=1; indice<=(27-4-7); indice++){
        printf(" ");
      }
      printf("%d", anno);
    }

    if (mes == 3){
      printf("MARZO");
      for (int indice=1; indice<=(27-4-5); indice++){
        printf(" ");
      }
      printf("%d", anno);
    }

    if (mes == 4){
      printf("ABRIL");
      for (int indice=1; indice<=(27-4-5); indice++){
        printf(" ");
      }
      printf("%d", anno);
    }

    if (mes == 5){
      printf("MAYO");
      for (int indice=1; indice<=(27-4-4); indice++){
        printf(" ");
      }
      printf("%d", anno);
    }

    if (mes == 6){
      printf("JUNIO");
      for (int indice=1; indice<=(27-4-5); indice++){
        printf(" ");
      }
      printf("%d", anno);
    }

    if (mes == 7){
      printf("JULIO");
      for (int indice=1; indice<=(27-4-5); indice++){
        printf(" ");
      }
      printf("%d", anno);
    }

    if (mes == 8){
      printf("AGOSTO");
      for (int indice=1; indice<=(27-4-6); indice++){
        printf(" ");
      }
      printf("%d", anno);
    }

    if (mes == 9){
      printf("SEPTIEMBRE");
      for (int indice=1; indice<=(27-4-10); indice++){
        printf(" ");
      }
      printf("%d", anno);
    }

    if (mes == 10){
      printf("OCTUBRE");
      for (int indice=1; indice<=(27-4-7); indice++){
        printf(" ");
      }
      printf("%d", anno);
    }

    if (mes == 11){
      printf("NOVIEMBRE");
      for (int indice=1; indice<=(27-4-9); indice++){
        printf(" ");
      }
      printf("%d", anno);
    }

    if (mes == 12){
      printf("DICIEMBRE");
      for (int indice=1; indice<=(27-4-9); indice++){
        printf(" ");
      }
      printf("%d", anno);
    }

    printf("\n");

    for (int indice=1; indice<=27; indice++){
      printf("=");
    }

    printf("\n");

    printf("LU  MA  MI  JU  VI | SA  DO\n");

    for (int indice=1; indice<=27; indice++){
      printf("=");
    }

    printf("\n");

    contcalendario = 1;
    contdiasemana = 1;

    while (contcalendario<=(puntos1+diasmes+puntos2)){
      while (contcalendario<=puntos1){
        if (contdiasemana == 1){
          printf(" . ");
        }
        else if (contdiasemana == 5){
          printf("  . |");
        }
        else {
          printf("  . ");
        }
        contdiasemana = contdiasemana + 1;
        contcalendario = contcalendario + 1;
      }
      while (contcalendario<=(puntos1+diasmes)){

        numerocalendario = contcalendario-puntos1;

        if ((contdiasemana == 1)&&(numerocalendario<10)){
          printf(" %d ", numerocalendario);
        }
        else if (contdiasemana == 1){
          printf("%d ", numerocalendario);
        }
        else if ((contdiasemana == 5)&&((numerocalendario)<10)){
          printf("  %d |", numerocalendario);
        }
        else if (contdiasemana == 5){
          printf(" %d |", numerocalendario);
        }
        else if ((contdiasemana == 7)&&((numerocalendario)<10)){
          printf("  %d\n", numerocalendario);
          contdiasemana= 0;
        }
        else if (contdiasemana == 7){
          printf(" %d\n", numerocalendario);
          contdiasemana= 0;
        }
        else if ((numerocalendario)<10){
          printf("  %d ", numerocalendario);
        }
        else{
          printf(" %d ", numerocalendario);
        }
        contdiasemana = contdiasemana + 1;
        contcalendario = contcalendario + 1;
      }
      while (contcalendario<=(puntos1+diasmes+puntos2)){

        if (contdiasemana == 1){
          printf(" . ");
        }
        else if (contdiasemana == 5){
          printf("  . |");
        }
        else if (contdiasemana == 7){
          printf("  .\n");
        }
        else{
          printf("  . ");
        }
        contdiasemana = contdiasemana + 1;
        contcalendario = contcalendario + 1;
      }
    }
}
}
}
