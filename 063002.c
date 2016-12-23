#include <stdio.h>
#include <string.h>

struct scores {
	
	int math;
	int physics;
	int eng;
	int chemistry;
	int history;
	char name[100];
};

struct scores set_scores(int math,int physics,int eng,int chemistry,int history,char name[])
{
	struct scores temp;

	temp.math=60;
	temp.physics=80;
	temp.eng=50;
	temp.chemistry=70;
	temp.history=70;
	return temp;
}
double average(struct scores s)
{
	int sum;
	sum = s.math + s.physics + s.eng + s.chemistry + s.history;
	return (double)sum/5.0;
}
void printscore( struct scores s)
{
	struct scores a={60,80,50,70,70,"Tanaka"};
	double ave;
	printf("%s さんの点数\n", a.name);
	printf("   数学: %d 点\n", a.math);
	printf("   物理: %d 点\n", a.physics);
	printf("   英語: %d 点\n", a.eng);
	printf("   化学: %d 点\n", a.chemistry);
	printf("   歴史: %d 点\n", a.history);
	ave = average(s);
	printf("   平均点: %.2f 点\n", ave);
}
int main(void)
{
	struct scores s={60,80,50,70,70,"Tanaka"};

	double ave;
	char name[100];
	printscore(s);
	return 0;
}
