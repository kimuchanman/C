#include <stdio.h>

int main(void)
{
	int i,j,n;
	printf("‚‚³‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<10+i;j++){
			if(j==i){
				putchar('*');
			}else{
		printf("%d",j%10);
			}
		}putchar('\n');
	}
return 0;
}