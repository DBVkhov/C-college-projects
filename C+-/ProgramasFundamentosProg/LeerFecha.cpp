#include <stdio.h>
#include <string.h>

typedef enum TipoMes{
  Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre
}
typedef struct TipoFecha{
  int dia;
  TipoMes mes;
  int anno;
}

void LeerFecha( TipoFecha & fecha){
  int aux;

  scanf("%d", &aux);
  if((aux > 0) && (aux <= 31)){
    fecha.dia = aux;
  }else{
    fecha.dia=1;
  }
  LeerMes (fecha.mes);
  scanf("%d", &aux);
  fecha.ano = aux;
}
