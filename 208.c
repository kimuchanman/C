#include<stdio.h>

int main(void){
	double max,min;
	double x[100];
	int a,b,i,n;
	
	printf("�����̌�����͂��Ă��������B\n");
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("%d�Ԗڂ̎�������͂��Ă��������B",i+1);
		scanf("%lf",&x[i]);
	}
	max=x[0];
	for(i=0;i<n;i++){
		if(x[i]>max){
			max=x[i];
			a=i+1;
		}
	}
		printf("%d�Ԗڂ�%.2f���ő�ł��B\n",a,max);
		min=x[0];
		for(i=0;i<n;i++){
			if(x[i]<min){
				min=x[i];
				b=i+1;
			}
		}
	printf("%d�Ԗڂ�%.2f���ŏ��ł��B\n",b,min);
	return 0;
}