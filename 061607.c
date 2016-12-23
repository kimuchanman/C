#include<stdio.h>

void double_set(double *v,double n,double val)
{
	int i;
	
	for(i=0;i<n;i++)
		*(v+i)=val;
}

int main(void)
{
	int i;
	double a[]={1,2,3,4,5};
	
	double_set(a,5,99);
		
	for(i=0;i<5;i++)
		printf("a[%d]=%.2f\n",i,a[i]);

	return 0;
}