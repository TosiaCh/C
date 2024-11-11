int silnia_i(int x) {
  if(x<=1){
    return 1;
  }
  else{
    return x*silnia_i(x-1);
  }
}

double silnia_f(int x) {
  if(x<=1){
    return 1;
  }
  else{
    return x*silnia_f(x-1);
  }
}
int podwsilnia_i(int x){
  if(x<=1){
    return 1;
  }
  else{
    return x*podwsilnia_i(x-2);
  }
}

double podwsilnia_f(int x){
  if(x<=1){
    return 1;
  }
  else{
    return x*podwsilnia_f(x-2);
  }
}

double fib_f(int x) {
if (x==0|| x==1){
    return 1.0;}
 else{
    return fib_f(x-1) + fib_f(x-2);
}}

int fib_i(int x) {
  if (x==0||x==1){
    return 1;}
else{
    return fib_i(x-1) + fib_i(x-2);
}}