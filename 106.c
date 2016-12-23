#include <stdio.h>

int main(void)
{
	int	m;
	printf("西暦年を入力してください。");
	scanf("%d",&m);
	
	if(m/400 == 0){
		printf("その年はうるう年です。");
	}else if(m%100 && m/4 == 0){
		printf("その年はうるう年です。");
	}else{
		printf("平年です。。");
	}
	return 0;
}