#include<stdio.h>

void str_repeat(char str1[],char str2[])
{
	int i=0,idx=0;
	while(str1[i]){
		str2[idx++]=str1[i];
		str2[idx++]=str1[i];
		i++;
	}
	str2[idx]='\0';
}


int main(void)
{
	char str1[1024],str2[1024];

	printf("•¶š—ñ‚Ì“ü—Í");
	scanf("%s",str1);


	str_repeat(str1,str2);

	printf("str2==%s",str2);

	return 0;
}