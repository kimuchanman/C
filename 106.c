#include <stdio.h>

int main(void)
{
	int	m;
	printf("����N����͂��Ă��������B");
	scanf("%d",&m);
	
	if(m/400 == 0){
		printf("���̔N�͂��邤�N�ł��B");
	}else if(m%100 && m/4 == 0){
		printf("���̔N�͂��邤�N�ł��B");
	}else{
		printf("���N�ł��B�B");
	}
	return 0;
}