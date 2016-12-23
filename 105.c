#include <stdio.h>

int main(void)
{
	int	n;
	printf("整数を入力してください。");
	scanf("%d",&n);
	
	if(-100>=n||n>=100){
		printf("その数の絶対値は100以上です。");
	}else if(-50<=n&&n<=50){
		printf("その数の絶対値は50以下です。");
	}else{
		printf("その数の絶対値は100未満50より大きいです。");
	}
	return 0;
}