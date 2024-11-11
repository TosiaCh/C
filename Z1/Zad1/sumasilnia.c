/* Antonina Chwała 2022.11.08 email: tosia.chwala@studen.uj.edu.pl
instrukcja kompilacji: gcc -sumasilnia.c -o sumasilnia
instrukcja uruchomienia: ./sumasilnia */


#include <stdio.h>

//funkcja licząca silnię
void silnia(int x) {
  int wynik=x;
      while (x>2) {
        x--;wynik*=x;
        
  }
    printf ("silnia=");
    printf ("%d\n",wynik);}


//funkcja licząca sumę
void suma(int x){
  int wynik=x;
       while (x>0){
           x--;wynik+=x;
         
}
   printf("suma=");
   printf("%d\n",wynik);
}

int main() {
  int n;
  printf ("podaj liczbę\n");
  scanf ("%d", &n);
  
  if (n<31){
    suma(n);
    silnia(n);
  }
  else {
    printf ("Przekroczono zakres!\n");
  }
    return 0;
}