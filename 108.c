#include <stdio.h>

int main(void)
{
	int	n,m,a=1;
	printf("����n����͂��Ă��������B");
	scanf("%d",&n);
	if(n<0){
		printf("���͒l���s�K�؂ł��B");
	}else if(n>=0){
		for(m=1;m<=n;m++){
			a=a*m;
			
		}
	}printf("%d!=%d",n,a);
	return 0;
}