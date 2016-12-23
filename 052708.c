#include<stdio.h>

void str_add(char str1[],char str2[],char str3[])
{
	int i=0,idx=0;
	while(str1[i]){
		str3[idx++]=str1[i];
		i++;
	}
	i=0;
	while(str2[i]){
		str3[idx++]=str2[i];
		i++;
	}
	str3[idx]='\0';
}

int main(void)
{
	char str1[1024],str2[1024],str3[1024];

	printf("ˆê‚Â–Ú‚Ì•¶Žš—ñ‚Ì“ü—Í");
	scanf("%s",str1);

	printf("“ñ‚Â–Ú‚Ì•¶Žš—ñ‚Ì“ü—Í");
	scanf("%s",str2);

	str_add(str1,str2,str3);

	printf("str3==%s",str3);

	return 0;
}