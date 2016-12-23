#include <stdio.h>

int main(void){
	int x[10]={0},i,j;
	printf("0～9までの数字を入力してください。-1で終了します。");
	scanf("%d",&i);
	
		x[i]+=1;
			while(i!=-1){
				if(0<=i && i<=9){
					x[i]+=1;
				}else if(i<=-2 || 10<=i){
			printf("入力された値が不適切です。\n");
				}
			printf("0～9までの数字を入力してください。-1で終了します。");
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