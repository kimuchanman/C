#include <stdio.h>

int main(void){
	int m,n,i,j;
	int a[5][5],b[5]={0},c[5],d[5]={0},e[5];
	
	for(i=0;i<5;i++){
		c[i]=1;
		e[i]=1;
	}
	printf("�s��̍s������͂��Ă��������B");
	scanf("%d",&m);
	printf("�s��̗񐔂���͂��Ă��������B");
	scanf("%d",&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d]�̒l����͂���:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		putchar('\n');
	}

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[i]+=a[i][j];
			c[i]*=a[i][j];
		}
		printf("��%d�s�̘a��%d�A�ς�%d�ł��B\n",i+1,b[i],c[i]);
	}
	putchar('\n');
	for(j=0;j<n;j++){
		for(i=0;i<m;i++){
			d[j]+=a[i][j];
			e[j]*=a[i][j];
		}
		printf("��%d��̘a��%d�A�ς�%d�ł��B\n",j+1,d[j],e[j]);
	}
return 0;
}