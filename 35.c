#include <stdio.h>

int main(void)
{
	int i,m,n,j,a[100][100];
	
	puts("�ǂ̂悤�ȍs��ł����H");
	printf("�s���F");	scanf("%d",&i);
	printf("�񐔁F");	scanf("%d",&j);
	
	for(m=0;m<i;m++){
		for(n=0;n<j;n++){
			printf("�s��̐�������͂��Ă��������B");
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
	
	