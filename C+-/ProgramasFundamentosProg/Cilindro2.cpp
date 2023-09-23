/**programa: Cilindro2*/
/*calcula el area y volumen de un cilindro*/

#include <stdio.h>
int main(){
  const float PI = 3.14159265;
  float radio, altura, area, volumen;
  printf("¿radio?");
  scanf("%f", &radio);
  printf("¿altura?");
  scanf("%f", &altura);
  area = 2 * PI * altura * radio * ( radio + altura);
  volumen = PI * radio * radio * altura;
  printf("Area= %g\nVolumen= %g", area, volumen);

}
