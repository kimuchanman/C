#include<stdio.h>

int main(void)
{
	int i=0,j=0;
	int *pi,*pj;
	int **ppi,**ppj;
	int ***pppi;

	pi=&i,pj=&j;
	ppi=&pi,ppj=&pj;
	pppi=&ppi;
	**(*pppi)=100;
	*(*ppj)=50;

	printf("i=%d\n",i);
	printf("j=%d\n",j);

	return 0;
}