#include<stdio.h>

int chchar(int c,int d){
	int i;
	if(c>=0x41 && c<=0x5a){
		i=c+d;
	}else{
		i=c;
	}
	if(i>0x5a)
	i-=26;
	return i;
}

int main(void){
	int i,j,k;
	printf("���炷����������͂��Ă��������B");
	scanf("%d",&i);
	printf("�A���t�@�x�b�h����͂��Ă��������B");
	
	while((j=getchar())!=EOF){
		k=chchar(j,i);
		printf("%c",k);
	}
	return 0;
}

	