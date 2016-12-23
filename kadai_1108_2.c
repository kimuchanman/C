#include <stdio.h>
#include <math.h>
#include <time.h>
 
void main(void)
{
	clock_t start, end;
        int i;
        int yn,xn,yn_point,xn_point;
        int dx;
	

        xn = 1.0;
        dx = 0.01;
         i = 0;
	
	start = clock();
        while(i<1000) /* sin(1)からsin(11)までの微分の結果を出力、しかし単精度なのでできない*/
        {
		xn_point = xn + dx;
        	yn_point = ( sin( xn + dx ) - sin( xn ) )/dx;
        	
        	printf("x=%1.2f    y=%1.5f\n", xn_point, yn_point);
        	xn = xn_point;
        	i++;
        }
	end = clock();
	printf("処理時間:%d[ms]\n", end - start );
}	
/*単精度だとそもそも計算結果が同じになってしまう*/
/*処理時間はどちらも変わらなかった*/