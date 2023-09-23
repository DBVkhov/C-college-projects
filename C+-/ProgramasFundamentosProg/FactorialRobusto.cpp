int FactorialRobusto(int n){
  int f = 1;

  if(n<0){
    throw 0;
  }
  for (int k = 2; k<= n; k++){
    if(f>INT_MAX/k){
      throw k;
    }
    f=f*k;
  }
  return f;
}
