#include <stdio.h>
#include <string.h>

struct scores {
	int math;
	int physics;
	int eng;
};

double average(struct scores s)
{
	int sum;
	sum = s.math + s.physics + s.eng;
	return (double)sum/3.0;
}
void printscore(char name[], struct scores s)
{
	double ave;
	printf("%s さんの点数\n", name);
	printf("   数学: %d 点\n", s.math);
	printf("   物理: %d 点\n", s.physics);
	printf("   英語: %d 点\n", s.eng);
	ave = average(s);
	printf("   平均点: %0.2f 点\n", ave);
}
int main(void)
{
	struct scores s;
	double ave;
	char name[100];
	s.math = 60;
	s.physics = 80;
	s.eng = 50;
	strcpy(name, "Tanaka");
	printscore(name, s);
	return 0;
}
