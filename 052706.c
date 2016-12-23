#include<stdio.h>

void rotate_string(char str[],int n)
{
	int i=0,idx=0;
	while(str[i]){
		if(str[i]>='a'&&str[i]<='z'){
			if(str[i]+n>'z')
				str[idx++]=str[i]+n-'z'+'a';
			else
				str[idx++]=str[i]+n;
		}
		else if(str[i]>='A'&&str[i]<='Z'){
			if(str[i]+n>'Z')
				str[idx++]=str[i]+n-'Z'+'A';
		else
			str[idx++]=str[i]+n;
		}
		else
			str[idx++]=str[i];
		i++;
	}
	str[idx]='\0';
}

int main(void)
{
	int n;
	char str[1024];

	printf("文字列を入力してください");
	scanf("%s",str);

	printf("アルファベットをずらす字数を指定");
	scanf("%d",&n);
	rotate_string(str,n);
	
	printf("str==%s\n",str);
	return 0;
}