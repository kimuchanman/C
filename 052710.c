#include<stdio.h>

unsigned str_length(char str[])
{
	unsigned len=0;
	while(str[len])
		len++;
	return len;
}

void str_ch4(char str1[],char str2[])
{
	int i=0,idx=0,j=1;
	unsigned len;
	len=str_length(str1);

	while(str1[i]){
		if(len-i<=4){
			str2[idx++]='0'+j;
			j++;
		}
		else
			str2[idx++]=str1[i];
			i++;
	}
	str2[idx]='\0';
}

int main(void)
{
	char str1[1024],str2[1024];
	
	printf("•¶Žš—ñ‚Ì“ü—Í");
	scanf("%s",str1);

	str_ch4(str1,str2);
	
	printf("str2==%s",str2);

	return 0;
}