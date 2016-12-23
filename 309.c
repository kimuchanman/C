#include <stdio.h>

int cal(int a){
int i,b=0;
for(i=1;i<=a;i++){
b+=i*i*i;
}
return b;
}
int main(void){
	int n,i;
	printf("®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		printf("cal(%d)=%d",i,cal(i));
		putchar('\n');
	}
	return 0;
}