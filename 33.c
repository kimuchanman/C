#include <stdio.h>

int main(void)
{
	int n,m,l;
	double a[1000],max,min ;
	printf("何個の実数ですか？");
	scanf("%d",&n);
	
	printf("%d個の実数を入力してください。\n",n);
	
	
	for(m = 0;m<n;m++){
		printf("%d番:",m+1);
		scanf("%lf",&a[m]);
		
	}
	max=min=a[0];
	for(m=1;m<n;m++){
		if(a[m]>max)
			max=a[m];
		
		
	}
	printf("最大値は%fで、%d番目です。",max,m);

	
	for(m=1;m<n;m++){
		if(a[m]<min) 
			min=a[m];
		
		printf("最低点は%fで、%d番目です。",min,m);break;
	
	}
	printf("最大値と最小値との差は%.2fです。",max-min);
	
	return 0;
}
	