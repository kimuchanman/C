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
	printf("%s ����̓_��\n", s.name);
	printf("   ���w: %d �_\n", s.math);
	printf("   ����: %d �_\n", s.physics);
	printf("   �p��: %d �_\n", s.eng);
	ave = average(s);
	printf("   ���ϓ_: %.2f �_\n", ave);
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
