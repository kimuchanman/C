#include <stdio.h>
#include <math.h>
int main(void)
{
	double a,b,c;
	puts("二次方程式ax^2+bx+cのa,b,cを入力してください。");
	printf("a=");	scanf("%lf",&a);
	printf("b=");	scanf("%lf",&b);
	printf("c=");	scanf("%lf",&c);
	
	if(a==0||b==0){
		printf("係数が不適切です。");
	}else if(b*b-4*a*c<0){
		printf("解は虚数です。");
	}else{
		printf("解は%fと%fです。",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
	}
	return 0;
}
	
	
	
	
	
	
	
	
