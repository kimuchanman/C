#include <stdio.h>

int main(void){
	double x,y;
	printf("�_�̍��W����͂��Ă��������B\n");
	printf("x���W�F");
	scanf("%lf",&x);
	printf("y���W�F");
	scanf("%lf",&y);	
	if(x>0 && y>0){
		printf("��1�ی�\n");
	}else if(x<0 && y>0){
		printf("��2�ی�\n");
	}else if(x<0 && y<0){
		printf("��3�ی�\n");
	}else if(x>0 && y<0){
		printf("��4�ی�\n");
	}else if(x==0 && y!=0){
		printf("y����\n");
	}else if(x!=0 && y==0){
		printf("x����\n");
	}else{
		printf("���_\n");
	}
	return 0;
}