#include <stdio.h>

int main(void){
	int i,j,n;
	printf("�����̕\��\�����܂��B\n");
	printf("2�ȏ�̐�������͂��Ă��������B");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		for(j=1;j<i;j++){
			printf("%d/%d ",j,i);
		}
		putchar('\n');
	}
	return 0;
}