/* Antonina Chwała 2022.11.26 email: tosia.chwala@studen.uj.edu.pl
instrukcja kompilacji: gcc swap.c -o swap
instrukcja uruchomienia: ./swap */

#include <stdio.h>

void swap(long double *a, long double *b){
  long double z;
  z=*a;
  *a=*b;
    *b=z;

  }
int main(void) {
 long double x=3.14159265359L;
  long double y=2.71828182846L ;
  printf("x=%Lf\ty=%Lf\n",x,y);
  swap(&x,&y);
  printf("x=%Lf\ty=%Lf\n",x,y);
  return 0;
}