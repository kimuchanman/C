#include<stdio.h>
#include<stdlib.h>
#define _USE_MATH_DEFINES
#include<math.h>

int main()
{ 
    FILE *fp;
    const double k = 20.0;
    const double b = 10.0;
    const double g = 9.8;
    const double m = 50.0;
    const double dt = 0.000000001;
    const double v = 100.0; 
    
    double kyori[900] = {0.0}; // 0deg ~ 90deg
    double y = 0.0; double x = 0.0;
    double vx, vy;
    double tmp_y, tmp_x, tmp_vx, tmp_vy;
    int i;
    double angle;

    fp = fopen("result3.csv", "w");

    for(i = 1; i < 900; i++)
    {
        angle = (double) i / 10.0;
        tmp_vx = v * cos(angle*M_PI/180);
        tmp_vy = vy = v * sin(angle*M_PI/180);
        y = 0.0;  x = 0.0;  tmp_y = 0.0;  tmp_x = 0.0;
        vy = 0.0;   vx = 0.0;

        do
        {
            if(vy >= 0)
            {
                vy = tmp_vy - (g + k*tmp_vy/m + b*tmp_vy*tmp_vy/m) * dt;
            }
            else
            {
                vy = tmp_vy - (g - k*tmp_vy/m + b*tmp_vy*tmp_vy/m) * dt;
            }

            vx = tmp_vx - (k*tmp_vx + b*tmp_vx*tmp_vx)*(dt/m);


            y = tmp_y + vy*dt;
            x = tmp_x + vx*dt;
            tmp_y = y;  tmp_x = x; tmp_vy = vy; tmp_vx = vx;
        }while(y > 0);

        kyori[i] = x;
        printf("%.1lf : %lf\n",angle,x);
        fprintf(fp,"%.1lf,%lf\n",angle,x);
        
    }
    fclose(fp);
    return 0;
}
