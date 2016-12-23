#include <stdio.h>

int main(void){
	int i,j,t,c,an=0,n,p,a[100];
	printf("10進数を2進数に変換であれば1を、2進数を10進数に変換であれば2を入力してください。");
	scanf("%d",&c);
	printf("変換する整数を入力してください。");
	scanf("%d",&n);
	if(c==1){
		for(i=0;n>0;i++){
			a[i]=n%2;
			n=n/2;
			t=i;
		}
		printf("変換結果:");
		for(i=t;i>=0;i--){
			printf("%d",a[i]);
		}
		}else if(c==2){
			for(i=0;n>0;i++){
				a[i]=n%10;
				n=n/10;
				t=i;
			}
			printf("変換結果:");
			for(i=0;i<=t;i++){
				p=1;
				for(j=0;j<i;j++){
					p*=2;
				}
				an+=a[i]*p;
			}
			printf("%d",an);
		}
	return 0;
}