#include <stdio.h>

int main(void)
{
	int	a;
	printf("数字を入力してください。");
	scanf("%d",&a);
	
	switch(a){
		case 1 : printf("日曜日です。");break;
		case 2 : printf("月曜日です。");break;
		case 3 : printf("火曜日です。");break;
		case 4 : printf("水曜日です。");break;
		case 5 : printf("木曜日です。");break;
		case 6 : printf("金曜日です。");break;
		case 7 : printf("土曜日です。");break;
		default : printf("そのような曜日はありません。");break;
	}
	return 0;
}
		
		