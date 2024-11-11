/* Antonina Chwała 2023.01.27 email: tosia.chwala@studen.uj.edu.pl
instrukcja kompilacji: gcc wyznacznik.c -o wyznacznik
instrukcja uruchomienia:./wyznacznik
Program wylicza wyznacznik macierzy o takim rozmiarze jaki chcemy.
Dlatego najpierw podaje się rozmiar macierzy (np. 5 stworzy macierz 5*5),
a następnie po spacji numer serii losowej (dowolną liczbe naturalną),
czyli numer serii liczb losowych, które zostaną przyporządkowane naszej macierzy.
Na podstawie tych danych program wyliczy wyznacznik danej macierzy*/
#include <stdio.h>
#include <stdlib.h>

double Determinant(int n,double a[][n])
{
    int i,j,j1,j2 ;                    
    double det = 0 ;                   
    double m[n-1][n-1] ;               
                                       

    if (n == 2)
        det = a[0][0] * a[1][1] - a[1][0] * a[0][1];
    else {                             
                                       
        det = 0 ;                      

                                           
        for (j1 = 0 ; j1 < n ; j1++) {
            for (i = 1 ; i < n ; i++) {
                j2 = 0 ;               
                                       
                for (j = 0 ; j < n ; j++) {
                    if (j == j1) continue ;

                    m[i-1][j2] = a[i][j] ;  
                                            
                                            
                    j2++ ;                  
                    }
                }
			if (j1%2==0) { 
				det += a[0][j1] * Determinant(n-1,m);
			}
			else {
				det+= -1 * a[0][j1] * Determinant(n-1,m);
			}
        }
    }
    return(det) ;
}
int main()
{
    int n,nr;

    printf("podaj rozmiar tablicy i numer serii losowej: ");
    if(scanf("%d %d",&n,&nr)!=2)
        exit(-1);

    double a[n][n];

    int i,j;

    srand(nr);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            a[i][j]=(double)rand()/RAND_MAX;
        }


    double da=Determinant(n,a);

    printf("Wyznacznik macierzy: %g\n",da);

    return 0;

}


