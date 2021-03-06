#include <stdio.h>
#include <math.h>
#include <time.h>
 
void main(void)
{
	clock_t start, end;
        int i;
        double yn, xn, yn_point, xn_point;
        double dx;
	

        xn = 1.0;
        dx = 0.01;
         i = 0;
	
	start = clock();
        while(i<=1000) /* sin(1.01)からsin(11.01)まだの微分の結果を出力*/
        {
		xn_point = xn + dx;
		/*例題�Bの微分方法(差分商)を利用した*/
        	yn_point = ( sin( xn + dx ) - sin( xn ) )/dx;
		xn=xn_point;
		printf("x=%1.2f    y=%1.5f\n", xn_point, yn_point);
		i++;
	}
	end = clock();
	printf("処理時間:%d[ms]\n", end - start );
}	