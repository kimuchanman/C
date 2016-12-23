#include <stdio.h>

int main(void)
{
	int h1,m1,s1,h2,m2,s2,h3,m3,s3,sum1,sum2,sum3 ;
	puts("二組の時刻を入力してもらいます");
	printf("何時？：");	scanf("%d",&h1);
	printf("何分？：");	scanf("%d",&m1);
	printf("何秒？：");	scanf("%d",&s1);
	printf("何時？：");	scanf("%d",&h2);
	printf("何分？：");	scanf("%d",&m2);
	printf("何秒？：");	scanf("%d",&s2);
	
	sum1 = 3600*h1+60*m1+s1 ;
	sum2 = 3600*h2+60*m2+s2 ;
	
	if(sum1>sum2){
		sum3=sum1-sum2;
		h3=sum3/3600;
		m3=(sum3-3600*h3)/60;
		s3=(sum3-3600*h3-60*m3);
		printf("差は%d時%d分%d秒です。",h3,m3,s3);
	}else if(sum2>sum1){
		sum3=sum2-sum1;
		h3=sum3/3600;
		m3=(sum3-3600*h3)/60;
		s3=(sum3-3600*h3-60*m3);
		printf("差は%d時%d分%d秒です。",h3,m3,s3);
	}
	
	return 0;
}
	
	
	