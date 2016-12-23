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
        while(i<=1000) /* sin(1.01)‚©‚çsin(11.01)‚Ü‚¾‚Ì”÷•ª‚ÌŒ‹‰Ê‚ðo—Í*/
        {
		xn_point = xn + dx;
		/*—á‘è‡B‚Ì”÷•ª•û–@(·•ª¤)‚ð—˜—p‚µ‚½*/
        	yn_point = ( sin( xn + dx ) - sin( xn ) )/dx;
		xn=xn_point;
		printf("x=%1.2f    y=%1.5f\n", xn_point, yn_point);
		i++;
	}
	end = clock();
	printf("ˆ—ŽžŠÔ:%d[ms]\n", end - start );
}	