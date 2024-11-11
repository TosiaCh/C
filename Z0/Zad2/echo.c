/* Antonina Chwała 26.01.2023 email:tosia.chwala@student.uj.edu.pl
  instrukcja kompilacji- gcc echo.c -o echo
instrukcja uruchomienia- ./echo "Witojcie!" 3 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[]){
  int x;
  if (argc<3)
    return 0;
  x=atoi(argv[2]);
  for(int i=0;i<x;i++){
    printf("%s\n",argv[1]);
  }
  return 0;
}