#include<stdio.h>

int main(void){
	double max,min;
	double x[100];
	int a,b,i,n;
	
	printf("実数の個数を入力してください。\n");
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("%d番目の実数を入力してください。",i+1);
		scanf("%lf",&x[i]);
	}
	max=x[0];
	for(i=0;i<n;i++){
		if(x[i]>max){
			max=x[i];
			a=i+1;
		}
	}
		printf("%d番目の%.2fが最大です。\n",a,max);
		min=x[0];
		for(i=0;i<n;i++){
			if(x[i]<min){
				min=x[i];
				b=i+1;
			}
		}
	printf("%d番目の%.2fが最小です。\n",b,min);
	return 0;
}