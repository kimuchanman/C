#include <stdio.h>
#include <string.h>

struct scores {
	char name[100];
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
void printscore( struct scores s)
{
	double ave;
	printf("%s さんの点数\n", s.name);
	printf("   数学: %d 点\n", s.math);
	printf("   物理: %d 点\n", s.physics);
	printf("   英語: %d 点\n", s.eng);
	ave = average(s);
	printf("   平均点: %.2f 点\n", ave);
}
int main(void)
{
	struct scores s;
	strcpy(s.name,"Tanaka");
	s.math=rand()%100 +1;
	s.physics=rand()%100 +1;
	s.eng=rand()%100 +1;



	printscore(s);
	return 0;
}
