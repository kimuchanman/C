#include<stdio.h>

void dswap(double *sx,double *sy)
{
	double temp=*sx;
	*sx=*sy;
	*sy=temp;
}

int main(void)
{
	double a,b;
	
	puts("2�̎��������");
	printf("����A�F");	scanf("%lf",&a);
	printf("����B�F");	scanf("%lf",&b);

	dswap(&a,&b);
	
	printf("����A�F%.2f",a);
	printf("����B�F%.2f",b);

	return 0;
}