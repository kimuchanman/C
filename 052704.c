#include<stdio.h>

void null_string(char str[])
{
	str[0]='\0';
}

int main(void)
{
	char str[1024];

	printf("���������͂��Ă�������");
	scanf("%s",str);

	null_string(str);
	
	printf("str==%s\n",str);
}