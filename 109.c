#include <stdio.h>

int main(void)
{
	int	n,m=0;
	printf("整数ｎを入力してください。");
	scanf("%d",&n);
	
	if(n/5 == 0){
		printf("0");
	}else if(n<0){
		for(n=n;n<=0;n++){
			m=m+n;
			
		}printf("和は、%dです。",m);
	}else{
		for(n=n;n>=0;n--){
			m=m+n;
			
		}printf("和は、%dです。",m);
	}
	return 0;
}