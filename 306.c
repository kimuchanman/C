#include <stdio.h>

int main(void){
	int i=1,f[1000];
	f[0]=0;
	f[1]=1;
	while(f[i]<10000){
		i++;
		f[i]=f[i-1]+f[i-2];
	}
	printf("�t�B�{�i�b�`�����10000�����̍ő�l�͑�%d����%d�ł��B",i,f[i-1]);
	return 0;
}