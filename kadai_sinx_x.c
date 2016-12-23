#include<stdio.h>
#include<math.h>
#include<omp.h>

#define Div 10
#define N_max Div * 200
#define pi 3.141592653589793
#define dx 2 * pi / Div

double start, end;

int main()
{
	int i;
	double x, input_data[N_max + 1], exact[N_max*2 + 1], interpo0[N_max*2 + 1], interpo1[N_max*2 + 1], rmse0 = 0, rmse1 = 0;

	for (i = 0; i <= N_max; i++){
		x = i*dx - 200*pi;
		input_data[i] = sin(x) / x;
	}
	input_data[Div*100] = 1;
	
	for (i= 0; i <= N_max * 2; i++){
		x = i*(dx/2) - 200*pi;
		exact[i] = sin(x) / x;
	}
	exact[Div*200] = 1;

	start = omp_get_wtime();

	for (i = 0; i <= N_max; i++){
		interpo0[i*2] = input_data[i];
		if (i < N_max) interpo0[1 + i*2] = input_data[i];
		
		interpo1[i*2] = input_data[i];
		if (i < N_max) interpo1[1 + i*2] = (input_data[i] + input_data[i+1]) / 2;
	}

	end = omp_get_wtime();
	
	for (i = 0; i <= N_max*2; i++){
		rmse0 += (dx/2) * sqrt(pow(exact[i] - interpo0[i], 2));
		rmse1 += (dx/2) * sqrt(pow(exact[i] - interpo1[i], 2));
	}
	
	printf("\nCalculation");
	printf("\nProcessing Time : %.10lf [s]\n", (double)(end - start));
	
	printf("\nÅ‹ß–T–@‚ÌRMSE = %.15lf\nüŒ`•âŠÔ‚ÌRMSE = %.15lf", rmse0, rmse1);

	return 0;
}