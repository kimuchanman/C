#include <stdio.h>

int main(void)
{
	int m;
	printf("月の数字を入力してください\n");
	scanf("%d",&m);
	
	switch(m){
		case 1 : printf("31日です");break;
		
		case 2 : printf("28日です");break;
		
		case 3 : printf("31日です");break;
		
		case 4 : printf("30日です");break;
		
		case 5 : printf("31日です");break;
		
		case 6 : printf("30日です");break;
		
		case 7 : printf("31日です");break;
		
		case 8 : printf("31日です");break;
		
		case 9 : printf("30日です");break;
		
		case 10 : printf("31日です");break;
		
		case 11 : printf("30日です");break;
		
		case 12 : printf("31日です");break;
		
		default : printf("そんな月はありませんよ！！"); break;
	}
	
	return 0;
}