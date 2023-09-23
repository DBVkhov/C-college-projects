int FactorialPositivo(int n){
  int f;
  if(n<0){
    f=0;
  } else{
    f=1;
    for (int k = 2; k <= n; k++){
      f=f*k;
    }
  }
  return f;
}
