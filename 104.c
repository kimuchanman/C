#include <stdio.h>

int main(void)
{
	int	a,b,c,d,e;
	printf("異なる5個の整数を入力してください。\n");
	scanf("%d	%d	%d	%d	%d",&a,&b,&c,&d,&e);
	printf("それらの平均値は%dです。",(a+b+c+d+e)/5);
	return 0;
}