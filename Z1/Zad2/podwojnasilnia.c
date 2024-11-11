/* Antonina Chwała 2022.11.15 email: tosia.chwala@studen.uj.edu.pl
instrukcja kompilacji: gcc -podwojnasilnia.c -o podwojnasilnia
instrukcja uruchomienia: ./podwojnasilnia */

#include <stdio.h>

double podwsilnia(int n){
  double silnia=1.0;
  int i;
  i=n;
   while (i>=2){
     silnia*=i;i=i-2;
   }

  printf("\n%d!!=%f\n\n",n,silnia);
  return silnia;
}

int main(){
  int n;
    printf("Prosze podac n\n");
int result = scanf("%d",&n);
    if(result != 1){
        printf("Error, nie udało się odczytać wartości");
        return 1;}
  if (n<0){
    printf ("error");
  }
  else{
      podwsilnia(n);}

  
  

return 0;
}