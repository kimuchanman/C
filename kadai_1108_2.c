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
        while(i<1000) /* sin(1)����sin(11)�܂ł̔����̌��ʂ��o�́A�������P���x�Ȃ̂łł��Ȃ�*/
        {
		xn_point = xn + dx;
        	yn_point = ( sin( xn + dx ) - sin( xn ) )/dx;
        	
        	printf("x=%1.2f    y=%1.5f\n", xn_point, yn_point);
        	xn = xn_point;
        	i++;
        }
	end = clock();
	printf("��������:%d[ms]\n", end - start );
}	
/*�P���x���Ƃ��������v�Z���ʂ������ɂȂ��Ă��܂�*/
/*�������Ԃ͂ǂ�����ς��Ȃ�����*/