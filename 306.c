#include <stdio.h>

int main(void){
	int i=1,f[1000];
	f[0]=0;
	f[1]=1;
	while(f[i]<10000){
		i++;
		f[i]=f[i-1]+f[i-2];
	}
	printf("フィボナッチ数列で10000未満の最大値は第%d項の%dです。",i,f[i-1]);
	return 0;
}