#include <stdio.h>

int main(void){
	int i,j,n;
	printf("分数の表を表示します。\n");
	printf("2以上の整数を入力してください。");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		for(j=1;j<i;j++){
			printf("%d/%d ",j,i);
		}
		putchar('\n');
	}
	return 0;
}