#include <stdio.h>

int main(void){
	int x[10]={0},i,j;
	printf("0�`9�܂ł̐�������͂��Ă��������B-1�ŏI�����܂��B");
	scanf("%d",&i);
	
		x[i]+=1;
			while(i!=-1){
				if(0<=i && i<=9){
					x[i]+=1;
				}else if(i<=-2 || 10<=i){
			printf("���͂��ꂽ�l���s�K�؂ł��B\n");
				}
			printf("0�`9�܂ł̐�������͂��Ă��������B-1�ŏI�����܂��B");
			scanf("%d",&i);
			}
		for(i=0;i<=9;i++){
			printf("%d",i);
			for(j=0;j<x[i];j++){
				putchar('*');
			}
			putchar('\n');
		}
		return 0;
	}