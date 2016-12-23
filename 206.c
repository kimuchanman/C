#include <stdio.h>

int main(void){
	
	double m;
	int	b,i,a;

	printf("距離を入力してください。");
	scanf("%lf",&m);
	
	if(m<=2.0){
		a=420;
	}else if(2.0<m && m<=3.0){
		a=650;
	}else if(3.0<m && m<=5.0){
		a=950;
	}else if(5.0<m && m<=8.0){
		a=1300;
	}else{
	b=m-8.0;
		if(b%5==0){
			i=b/5;
		}else{
			i=b/5+1;
			}
		a=1300+i*600;
	}
	printf("%.1fkm乗った場合のタクシー料金は%d円です。\n",m,a);
return 0;
}