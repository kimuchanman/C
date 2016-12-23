#include<stdio.h>
#include<math.h>
#include<omp.h>

#define NT 3001
#define dt 0.01
#define g 9.8
#define k 20.0
#define m 50.0

double start, end;

int main(void)
{
	double y[4000] ;
	double v[4000] ;


	int i;
	double sum_y = 0 , sum_v = 0;

	start = omp_get_wtime();


	for( i=0 ; i<=NT-1 ; i++ ){
		v[i+1] = v[i] + (double)(g-k*v[i]/m)*dt;
		y[i+1] = y[i] + v[i]*dt;
	}

	sum_y = y[NT];
	sum_v = v[NT];

	end = omp_get_wtime();

	
	printf("\nCalculation");
	printf("\nProcessing Time : %.10lf [s]", (double)(end - start));
	printf("\ny = %lf", (double)sum_y );
	printf("\nv = %lf", (double)sum_v );
}



