#include <stdio.h>

int main(void){
	int i,j,a[100][100],n;
	for(i=0;i<7;i++){
		for(j=0;j<=i;j++){
			if(j==0 || j==i){
				a[i][j]=1;
			}else{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	printf("パスカルの三角形を表示します。\n");
	printf("何段ですか？");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-2*i;j++){
			printf(" ");
		}for(j=0;j<=i;j++){
			printf("%2d    ",a[i][j]);
		}
		putchar('\n');
	}
	return 0;
}