#include <stdio.h>

int main(void)
{
	int n,m,l;
	double a[1000],max,min ;
	printf("���̎����ł����H");
	scanf("%d",&n);
	
	printf("%d�̎�������͂��Ă��������B\n",n);
	
	
	for(m = 0;m<n;m++){
		printf("%d��:",m+1);
		scanf("%lf",&a[m]);
		
	}
	max=min=a[0];
	for(m=1;m<n;m++){
		if(a[m]>max)
			max=a[m];
		
		
	}
	printf("�ő�l��%f�ŁA%d�Ԗڂł��B",max,m);

	
	for(m=1;m<n;m++){
		if(a[m]<min) 
			min=a[m];
		
		printf("�Œ�_��%f�ŁA%d�Ԗڂł��B",min,m);break;
	
	}
	printf("�ő�l�ƍŏ��l�Ƃ̍���%.2f�ł��B",max-min);
	
	return 0;
}
	