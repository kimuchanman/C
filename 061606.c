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
	
	puts("2つの実数を入力");
	printf("実数A：");	scanf("%lf",&a);
	printf("実数B：");	scanf("%lf",&b);

	dswap(&a,&b);
	
	printf("実数A：%.2f",a);
	printf("実数B：%.2f",b);

	return 0;
}