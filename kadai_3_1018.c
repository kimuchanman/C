#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double pai(int n) {
  int i, r;
  double x, y;
  for (i = 0, r = 0; i < n; i++) {
    x = (double)rand()/RAND_MAX;
    y = (double)rand()/RAND_MAX;
    if ((x*x + y*y) < 1.0)
      r++;
  }
/* pai = 4*r/n ‚æ‚è*/
  return 4.0* r / n;
}

int main(void)
{
 /*‚»‚±‚»‚±³Šm‚È’l‚É‚È‚é‚æ‚¤‚É‚Ž‚ðÝ’è*/
  printf("%1.9f\n", pai(70000000));

  return 0;
}