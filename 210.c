#include <stdio.h>

int main(void){
	int a=2,b=1;
	while(1){
		printf("%d年目の鼠の数は%d匹です。\n",b,a);
		if(a>=1000)break;
		a*=2;
		b+=1;
	}
	while(1){
		a*=2;
		b+=1;
		if(a>=10000){
			printf("鼠の数が10000匹を超えるには%d年必要です。\n",b);break;
		}
	}
return 0;
}