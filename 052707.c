#include<stdio.h>

unsigned str_length(char str[])
{
	unsigned len=0;
	while(str[len])
		len++;
	return len;
}

void str_ncopy(char str1[],char str2[],int n, int m)
{
	int i,j=0;
	unsigned len;
	len=str_length(str1);
	/*str1の長さはlen*/
	
	if(len<n){
		str2[0]='\0';
		return;
	}
	for(i=n-1;i<len;i++){
		if(j>=m){
			str2[j]='\0';
			return;
			break;
		}
		str2[j++]=str1[i];
	}
}

int main(void)
{
	int n,m;
	char str1[1024];
	char str2[1024];

	printf("文字列を入力してください");

	scanf("%s",str1);
	printf("何文字目から何文字をコピー？");
	scanf("%d %d",&n,&m);

	str_ncopy(str1,str2,n,m);
	printf("str==%s\n",str2);

	return 0;
}
