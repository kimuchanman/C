#include<stdio.h>

int chchar(int c,int start,int end){
	int i;
	if(c>=start && c<=end){
		i=0x2d;
	}else{
		i=c;
	}
	return i;
}

int main(void){
	int i,j,k,l,key;
	printf("�͈͂̍ŏ��̕����́H");
	while((key=getchar())!='\n' )
		i=key;
	printf("�͈͂̍Ō�̕����́H");
	while((key=getchar())!='\n' )
		j=key;

	printf("���������͂��Ă��������B");
	while((k=getchar())!=EOF){
		l=chchar(k,i,j);
		printf("%c",l);
	}
	return 0;
}