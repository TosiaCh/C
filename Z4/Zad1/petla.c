/* Antonina Chwała 2022.12.01 email: tosia.chwala@studen.uj.edu.pl
instrukcja kompilacji: gcc -petla.c -o petla
instrukcja uruchomienia: ./petla */

#include <stdio.h>
#include <stdio.h>
#include <math.h>

// funckja, która generuje tablicę wartości funkcji f(x) jednej zmiennej typu double w przedziale domkniętym {a, b} z krokiem dx.
void table(double (*f)(double),double x_start,double x_end, double dx){
             
    
  for(int i=0;i<=(x_end-x_start)/dx;i++)
         printf("%lf\t%lf\n",x_start+i*dx,f(x_start+i*dx));

}


double suma(double (*f)(double),double x_start,double x_end, double dx){
             
    double suma=0.0;

    for(int i=0;i<=(x_end-x_start)/dx;i++)
             suma=suma+f(x_start+i*dx);


   return suma*dx;
}

int main(){
         

      
 
 printf("%lf\n",suma(tan,0.0,1,0.1));



return 0;

}

