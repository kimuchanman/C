#include <stdio.h>

int main(void)
{
	int	a,b,c,d;
	puts("複素数をa+bi,c+diの形で二つ表してください。");
	printf("a:");	scanf("%d",&a);
	printf("b:");	scanf("%d",&b);
	printf("c:");	scanf("%d",&c);
	printf("d:");	scanf("%d",&d);
	
	printf("和は%d+%diです。",a+c,b+d);
	printf("積は%d+%diです。",a*c-b*d,a*d+b*c);
	
	return 0;
}
	
	
	
	