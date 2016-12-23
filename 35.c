#include <stdio.h>

int main(void)
{
	int i,m,n,j,a[100][100];
	
	puts("どのような行列ですか？");
	printf("行数：");	scanf("%d",&i);
	printf("列数：");	scanf("%d",&j);
	
	for(m=0;m<i;m++){
		for(n=0;n<j;n++){
			printf("行列の成分を入力してください。");
			scanf("%d",&a[m][n]);
		}
	}
	
	if((m+n)%2==1){
		a[m][n]=0;
	for(m=0;m<i;m++){
		printf("\n");
		for(n=0;n<j;n++){
			printf("%d ",a[m][n]);
			}
		}
	}
	
	return 0;
}
	
	