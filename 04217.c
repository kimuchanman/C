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
	printf("�w�肷�镶������͂��Ă��������B");
	i=getchar();
	printf("���������͂��Ă��������B");
	while((j=getchar())!=EOF){
		k=chchar(j,i);
		printf("%c",k);
	}
	return 0;
}
