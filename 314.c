#include <stdio.h>

int sum(int a, int b){
	int c=0,i;
	if(a>=b){
		for(i=b;i<=a;i++){
			c+=i;
		}
	}else{
		for(i=a;i<=b;i++){
			c+=i;
		}
	}
	return c;
}

int main(void){
	int m,n;
	printf("“ñ‚Â‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	scanf("%d %d",&m,&n);
	printf("%d‚©‚ç%d‚Ü‚Å‚Ì˜a‚Í%d‚Å‚·B\n",m,n,sum(m,n));
	return 0;
}