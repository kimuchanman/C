#include <stdio.h>

int main(void)
{
	int m;
	printf("���̐�������͂��Ă�������\n");
	scanf("%d",&m);
	
	switch(m){
		case 1 : printf("31���ł�");break;
		
		case 2 : printf("28���ł�");break;
		
		case 3 : printf("31���ł�");break;
		
		case 4 : printf("30���ł�");break;
		
		case 5 : printf("31���ł�");break;
		
		case 6 : printf("30���ł�");break;
		
		case 7 : printf("31���ł�");break;
		
		case 8 : printf("31���ł�");break;
		
		case 9 : printf("30���ł�");break;
		
		case 10 : printf("31���ł�");break;
		
		case 11 : printf("30���ł�");break;
		
		case 12 : printf("31���ł�");break;
		
		default : printf("����Ȍ��͂���܂����I�I"); break;
	}
	
	return 0;
}