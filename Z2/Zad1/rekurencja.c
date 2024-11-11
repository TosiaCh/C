/* Antonina Chwała 2022.11.01 email: tosia.chwala@studen.uj.edu.pl
instrukcja kompilacji: gcc -rekurencja.c -o rekurencja
instrukcja uruchomienia: ./rekurencja */
#include <stdio.h>
#include <stdlib.h>
//silnia rekurencja
int silnia_i(int x) {
  if(x<=1){
    return 1;
  }
  else{
    return x*silnia_i(x-1);
  }
}
//silnia rekurencja double-->int
double silnia_f(int x) {
  if(x<=1){
    return 1;
  }
  else{
    return x*silnia_f(x-1);
  }
}//podwójna silnia rekurencja
int podwsilnia_i(int x){
  if(x<=1){
    return 1;
  }
  else{
    return x*podwsilnia_i(x-2);
  }
}
//podwójna silnia rekurencja double-->int
double podwsilnia_f(int x){
  if(x<=1){
    return 1;
  }
  else{
    return x*podwsilnia_f(x-2);
  }
}
// ciąg fibonacciego double-->int
double fib_f(int x) {
if (x==0|| x==1){
    return 1.0;}
 else{
    return fib_f(x-1) + fib_f(x-2);
}}
// ciąg fibonacciego
int fib_i(int x) {
  if (x==0||x==1){
    return 1;}
else{
    return fib_i(x-1) + fib_i(x-2);
}}
// funkcja main
 int main(){  int n;
     printf("Podaj n\n");
     int result=scanf("%d",&n);
   if(result != 1){
        printf("Error, nie udało się odczytać wartości");
        return 1;}
    printf ("silnia=");
    printf ("%.1f\n",silnia_f(n));
  
  
    if (n==0){ 
      printf("podwójna silnia=0\n");
      printf("fib=0");
    }
    else{ printf("podwójna silnia=");
       printf("%.1f\n",podwsilnia_f(n));
         printf("fib=");
        printf("%.1f\n",fib_f(n));
    }
   
  
    
    return 0;

    }