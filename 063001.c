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
	printf("%s ����̓_��\n", name);
	printf("   ���w: %d �_\n", s.math);
	printf("   ����: %d �_\n", s.physics);
	printf("   �p��: %d �_\n", s.eng);
	ave = average(s);
	printf("   ���ϓ_: %0.2f �_\n", ave);
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
