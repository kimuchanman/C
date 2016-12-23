#include <stdio.h>

int main(void){
	int dan,i,j,a=999;
	printf("’i”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&dan);
	for(i=0;i<dan;i++){
		for(j=0;j<i;j++){
			putchar(' ');
		}
		printf("%d\n",a%10);
		a--;
	}
return 0;
}