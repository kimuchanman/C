#include <stdio.h>

int main(void)
{
	int	n,m,a=1;
	printf("整数nを入力してください。");
	scanf("%d",&n);
	if(n<0){
		printf("入力値が不適切です。");
	}else if(n>=0){
		for(m=1;m<=n;m++){
			a=a*m;
			
		}
	}printf("%d!=%d",n,a);
	return 0;
}