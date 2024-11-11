/*Antonina Chwała 27.01.2023 email:tosia.chwala@student.uj.edu.pl 
  Instrukcja kompilacji: gcc -c funkcje.c
gcc -c main.c
  gcc funkcje.o main.o -o main
  ./main */

#include<stdio.h>
#include<stdlib.h>
#include"rekurencja.h"

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
  }