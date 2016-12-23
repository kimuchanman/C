#include <stdio.h>

int main(void){
	double x,y;
	printf("点の座標を入力してください。\n");
	printf("x座標：");
	scanf("%lf",&x);
	printf("y座標：");
	scanf("%lf",&y);	
	if(x>0 && y>0){
		printf("第1象限\n");
	}else if(x<0 && y>0){
		printf("第2象限\n");
	}else if(x<0 && y<0){
		printf("第3象限\n");
	}else if(x>0 && y<0){
		printf("第4象限\n");
	}else if(x==0 && y!=0){
		printf("y軸上\n");
	}else if(x!=0 && y==0){
		printf("x軸上\n");
	}else{
		printf("原点\n");
	}
	return 0;
}