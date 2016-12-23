/*円周率πの導入*/
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define N_max 31
int main(void)
{
	double pi = M_PI;
	double dx = pi / 3 / N_max;
	double sum_daikei = 0;
	double sum1 = 0;
	double input_data[100];
	double input_data_1[100];
	double sum_simp = 0;
	double input_data_2[100];
	int i,j;

	for (i = 0;i < N_max-1 ;i++) {
		input_data[i] = sin( ( i-1 )*dx + pi / 3);
		input_data_1[i] = sin( i*dx + pi / 3);
		input_data_2[i] = sin( ( i+2 )*dx + pi / 3);
/*短冊と台形を求める*/
		sum1 = sum1 + input_data[i]*dx;
		sum_daikei = sum_daikei + (input_data[i] + input_data_1[i])*dx / 2;
		

	}
/*シンプトン法は別のfor文*/
	for (i = 0;i < N_max-1 ;i = i+2 ) {
		input_data[i] = sin( ( i-1 )*dx + pi / 3);
		input_data_1[i] = sin( i*dx + pi / 3);
		input_data_2[i] = sin( ( i+2 )*dx + pi / 3);
		sum_simp = sum_simp + (input_data[i] +( 4 * input_data_1[i] ) + input_data_2[i])*dx / 3;

	}

	printf("sum1 = %lf\n", sum1);
	printf("sum_daikei = %lf\n", sum_daikei);
	printf("sum_simp = %lf\n", sum_simp);

	return 0;
}

/* MATLABの方が精度が高い（πの精度のためか？）*/