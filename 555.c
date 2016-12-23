#include <stdio.h>
#include <string.h>

typedef struct {
	char name[100];
	int math;
	int physics;
	int eng;
}Student;

double ave_course( Student std[],int i)
{
	int sum1,sum2,sum3;
	for(i=0;i<3;i++)
	sum1 += std[i].math;
	sum2 += std[i].physics;
	sum3 += std[i].eng;
	return (double)sum1/3.0;
	return (double)sum2/3.0;
	return (double)sum3/3.0;
}
void printscore( Student s)
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
	int i;
	Student std[]={
	{"Itoh",85,79,90},
	{"Satoh",60,60,75},
	{"Katoh",90,55,70},
	{"Mutoh",40,50,80},
	{"Gotoh",100,80,95},
	{"Naitoh",30,60,15},
};
	for(i=0;i<6;i++)
		printf("%-8s %6d %6d %6d\n",std[i].name,std[i].math,std[i].physics,std[i].eng);



	return 0;
}
