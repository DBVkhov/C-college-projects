#include <stdio.h>
#include <math.h>

float Distancial( float x1, float y1, float x2, float y2){
  x1= x2 - x1;
  y1= y2 - y1;
  return sqrt (x1*x1 + y1*y1);
}
