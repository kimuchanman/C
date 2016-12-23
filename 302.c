#include <stdio.h>

int main(void){
	int m,n,i,j,a[10][10];
	printf("m×n行列の転置行列を生成します。\n");
	printf("m:");
	scanf("%d",&m);
	printf("n:");
	scanf("%d",&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d行%d列の成分を入力してください。",i+1,j+1);
			scanf("%d",&a[j][i]);
		}
		putchar('\n');
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%3d",a[i][j]);
		}
		putchar('\n');
	}
	return 0;
}