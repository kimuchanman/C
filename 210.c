#include <stdio.h>

int main(void){
	int a=2,b=1;
	while(1){
		printf("%d�N�ڂ̑l�̐���%d�C�ł��B\n",b,a);
		if(a>=1000)break;
		a*=2;
		b+=1;
	}
	while(1){
		a*=2;
		b+=1;
		if(a>=10000){
			printf("�l�̐���10000�C�𒴂���ɂ�%d�N�K�v�ł��B\n",b);break;
		}
	}
return 0;
}