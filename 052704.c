#include<stdio.h>

void null_string(char str[])
{
	str[0]='\0';
}

int main(void)
{
	char str[1024];

	printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s",str);

	null_string(str);
	
	printf("str==%s\n",str);
}