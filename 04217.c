#include<stdio.h>

int chchar(int c,int d){
	int i;
	if(c==d){
		i=0x2a;
	}else{
		i=c;
	}
	return i;
}

int main(void){
	int i,j,k;
	printf("指定する文字を入力してください。");
	i=getchar();
	printf("文字列を入力してください。");
	while((j=getchar())!=EOF){
		k=chchar(j,i);
		printf("%c",k);
	}
	return 0;
}
