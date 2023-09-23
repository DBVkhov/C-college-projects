/** programa: HorasMinutosSegundos*/
/*convierte los segundos introducidos a horas, minutos y segundos*/

#include <stdio.h>

int main(){
  int horas, minutos, segundos;

  printf("Introduzca los segundos totales:");
  scanf("%d", &segundos);

  horas = segundos / 3600;
  segundos = segundos % 3600;
  minutos = segundos / 60;
  segundos = segundos % 60;

  printf("Equivale a %2d horas %2d minutos y %d segundos.\n", horas, minutos, segundos);
}
