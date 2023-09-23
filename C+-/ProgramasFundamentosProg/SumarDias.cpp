typedef enum TipoDia{
  Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo
}
TipoDia SumarDias(TipoDia Hoy, int N){
  const int DiasSemana = 7;
  int aux;

  aux= (int(Hoy) + N)% DiasSemana;
  return TipoDia(aux);
}
