#include <stdio.h>
#include <math.h>
int main(void)
{
	double a,b,c;
	puts("�񎟕�����ax^2+bx+c��a,b,c����͂��Ă��������B");
	printf("a=");	scanf("%lf",&a);
	printf("b=");	scanf("%lf",&b);
	printf("c=");	scanf("%lf",&c);
	
	if(a==0||b==0){
		printf("�W�����s�K�؂ł��B");
	}else if(b*b-4*a*c<0){
		printf("���͋����ł��B");
	}else{
		printf("����%f��%f�ł��B",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
	}
	return 0;
}
	
	
	
	
	
	
	
	
