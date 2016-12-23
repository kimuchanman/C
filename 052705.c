#include<stdio.h>

void chcase_string(char str[])
{
	int i=0,idx=0;
	while(str[i]){
		if(str[i]>='a'&&str[i]<='z')
			str[idx++]=str[i]-'a'+'A';
		else if(str[i]>='A'&&str[i]<='Z')
			str[idx++]=str[i]-'A'+'a';
		else
			str[idx++]=str[i];
		i++;
	}
	str[idx]='\0';
}

int main(void)
{
	char str[1024];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s",str);

	chcase_string(str);
	
	printf("str==%s\n",str);
	return 0;
}