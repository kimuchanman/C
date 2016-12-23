#include <stdio.h>

int main(void){
	int i,j,n;
printf("‚‚³‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
scanf("%d",&n);
for(i=1;i<=n;i++){
	if(i==n){
		for(j=1;j<=(i-1)*2+1;j++){
			putchar('*');
		}
	}else{
		for(j=1;j<=n-i;j++)
			{
			putchar(' ');
			}for(j=1;j<=(i-1)*2+1;j++){
			if(j==1 || j==(i-1)*2+1){
				putchar('*');
		}else{
			putchar(' ');
				}
			}	
		}putchar('\n');
	}
return 0;
}
