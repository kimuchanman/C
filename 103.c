#include <stdio.h>

int main(void)
{
	int	a,b,c,d;
	puts("���f����a+bi,c+di�̌`�œ�\���Ă��������B");
	printf("a:");	scanf("%d",&a);
	printf("b:");	scanf("%d",&b);
	printf("c:");	scanf("%d",&c);
	printf("d:");	scanf("%d",&d);
	
	printf("�a��%d+%di�ł��B",a+c,b+d);
	printf("�ς�%d+%di�ł��B",a*c-b*d,a*d+b*c);
	
	return 0;
}
	
	
	
	