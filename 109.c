#include <stdio.h>

int main(void)
{
	int	n,m=0;
	printf("����������͂��Ă��������B");
	scanf("%d",&n);
	
	if(n/5 == 0){
		printf("0");
	}else if(n<0){
		for(n=n;n<=0;n++){
			m=m+n;
			
		}printf("�a�́A%d�ł��B",m);
	}else{
		for(n=n;n>=0;n--){
			m=m+n;
			
		}printf("�a�́A%d�ł��B",m);
	}
	return 0;
}