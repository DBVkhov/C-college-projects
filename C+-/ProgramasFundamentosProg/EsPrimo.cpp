bool EsPrimo( int k){
  for (int d=2; d<= k-1; d++){
    if ((k%d) == 0){
      return false;
    }
  }
  return true;
}
