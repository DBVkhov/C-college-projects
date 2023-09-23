#include <stdio.h>
#include <math.h>

float xA, yA, xB, yB, xC, yC;
float perimetro;

void LeerCoordenadas ( char Punto, float & x, float & y ){
  printf ( "Punto %c\n", Punto);
  printf ( "Coordenada x? ");
  scanf ( "%f", &x);
  printf("Coordenada Y?");
  scanf("%f", &y);
  printf("\n");
}
void LeerVertices(){
  LeerCoordenadas( 'A', xA, yA);
  LeerCoordenadas( 'B', xB, yB);
  LeerCoordenadas( 'C', xC, yC);
}
float Distancia( float x1, float y1, float x2, float y2){

  float deltaX, deltaY;

  deltaX= x2 - x1;
  deltaY= y1 - y2;

  return sqrt(deltaX*deltaX + deltaY*deltaY);
}
void CalcularPerimetro(){

  float ladoAB, ladoAC, ladoBC;

  ladoAB= Distancia (xA, yA, xB, yB);
  ladoAC= Distancia (xA, yA, xC, yC);
  ladoBC= Distancia (xB, yB, xC, yC);

  perimetro = ladoAB + ladoAC + ladoBC;
}
void ImprimirPerimetro(){
  printf("El perimetro es igual a %5.2f\n", perimetro);
}
int main(){
  LeerVertices();
  CalcularPerimetro();
  ImprimirPerimetro();
}
