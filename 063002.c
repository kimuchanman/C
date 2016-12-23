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
	printf("%s ����̓_��\n", a.name);
	printf("   ���w: %d �_\n", a.math);
	printf("   ����: %d �_\n", a.physics);
	printf("   �p��: %d �_\n", a.eng);
	printf("   ���w: %d �_\n", a.chemistry);
	printf("   ���j: %d �_\n", a.history);
	ave = average(s);
	printf("   ���ϓ_: %.2f �_\n", ave);
}
int main(void)
{
	struct scores s={60,80,50,70,70,"Tanaka"};

	double ave;
	char name[100];
	printscore(s);
	return 0;
}
