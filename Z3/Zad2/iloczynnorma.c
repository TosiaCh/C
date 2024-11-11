/* Antonina Chwała 2023.01.27 email: tosia.chwala@studen.uj.edu.pl
instrukcja kompilacji: gcc -lm iloczynnorma.c -o iloczynnorma
instrukcja uruchomienia: ./iloczynnorma */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define N 7

double dot(int d, double *a, double *b) {
  int wynik = 0;
  for (int i = 0; i < d; i++) {
    wynik = wynik + (a[i] * b[i]);
  }
  return wynik;
}
double norm(int w, double *a) {
  int i;
  double wynik = 0.0;
  for (i = 0; i < w; i++) {
    wynik = wynik + (a[i]) * (a[i]);
  }
  return sqrt(wynik);
}

int main() {
  double *A;
  double B[N] = {23, 23, 23, 32, 23, 23, 23};

  A = malloc(N * sizeof(double));
  *A = -12.0;
  *(A + 1) = -13.0;
  *(A + 2) = -13.0;
  *(A + 3) = -13.0;
  *(A + 4) = -123.0;
  *(A + 5) = -123.0;
  *(A + 6) = -123.0;


  double result = dot(N, A, B);
  printf("Iloczynsk=");
  printf("%f", result);
  printf("\n");

  double i = norm(N, A);
  printf("Norma euklidesowa, długość wektora A=");
  printf("%f", i);

  free(A);
  return 0;
}