#include <stdio.h>

int main(void)
{
	int	n;
	printf("��������͂��Ă��������B");
	scanf("%d",&n);
	
	if(-100>=n||n>=100){
		printf("���̐��̐�Βl��100�ȏ�ł��B");
	}else if(-50<=n&&n<=50){
		printf("���̐��̐�Βl��50�ȉ��ł��B");
	}else{
		printf("���̐��̐�Βl��100����50���傫���ł��B");
	}
	return 0;
}