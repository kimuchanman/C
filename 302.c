#include <stdio.h>

int main(void){
	int m,n,i,j,a[10][10];
	printf("m�~n�s��̓]�u�s��𐶐����܂��B\n");
	printf("m:");
	scanf("%d",&m);
	printf("n:");
	scanf("%d",&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d�s%d��̐�������͂��Ă��������B",i+1,j+1);
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