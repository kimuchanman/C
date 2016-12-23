#include<stdio.h>

int main(void){
	int	i,j,n;
	
	printf("‚‚³‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i-1;j++){
			putchar(' ');
		}for(j=1;j<=(n-i)*2+1;j++){
		putchar('*');
	}putchar('\n');
	}
return 0;
}
