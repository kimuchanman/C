#include <stdio.h>

	int main(void){
	int i,j,a[6][6],gy,re;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			a[i][j]=10*i+j;
			printf("%d ",a[i][j]);
		}
		putchar('\n');
	}
	printf("�\������ʒu����͂��Ă��������B\n");
	printf("�s�F");	scanf("%d",&gy);
	printf("��F");	scanf("%d",&re);
	for(i=gy-2;i<=gy;i++){
		for(j=re-2;j<=re;j++){
			printf("%3d",a[i][j]);
		}
		putchar('\n');
	}
	return 0;
}