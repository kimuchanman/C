#include <stdio.h>

int main(void){
	int i,f[10];
	f[0]=0;
	f[1]=1;
	printf("�t�B�{�i�b�`����̍ŏ���10���������܂��B");
	for(i=2;i<10;i++){
	f[i]=f[i-1]+f[i-2];
	}for(i=0;i<10;i++){
	printf("%3d",f[i]);
	}
	return 0;
}