#include<stdio.h>
#include<math.h>
#include<omp.h>

#define Div 30
#define Upper 100
#define N_max Div * Upper
#define dx 1.0 / Div
#define pi 3.141592653589793

double start, end;

int main()
{
	int i;
	double input_data[N_max + 1], exact, sum0d = 0, sum1d = 0, sum2d = 0;

	exact = sqrt(pi) / 2;

	for (i = 0; i <= N_max; i++){
		input_data[i] = exp(-pow(i*dx, 2));
	}

	start = omp_get_wtime();

	for (i = 0; i < N_max; i++){
		sum0d += input_data[i] * dx;
		sum1d += (input_data[i] + input_data[i + 1]) * dx / 2;
	}

	for (i = 0; i < N_max-1; i += 2){
		sum2d += (input_data[i] + 4*input_data[i+1] + input_data[i+2]) * dx / 3;
	}

	end = omp_get_wtime();

	printf("\nCalculation");
	printf("\nProcessing Time : %.10lf [s]\n", (double)(end - start));

	printf("\n短冊 = %.15lf\n台形 = %.15lf\nシンプソン = %.15lf\n", sum0d, sum1d, sum2d);
	printf("\n短冊の誤差 = %.15lf\n台形の誤差 = %.15lf\nシンプソンの誤差 = %.15lf", sum0d - exact, sum1d - exact, sum2d - exact);

	return 0;
}