#include<stdio.h>

int main(void)
{
	int i,no;
	
	printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%d",&no);

	i=0;
	while(i<=no)
		printf("%d",2^i++);
	printf("\n");

	return 0;
}