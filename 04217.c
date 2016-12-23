#include<stdio.h>

int chchar(int c,int d){
	int i;
	if(c==d){
		i=0x2a;
	}else{
		i=c;
	}
	return i;
}

int main(void){
	int i,j,k;
	printf("w’è‚·‚é•¶š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	i=getchar();
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	while((j=getchar())!=EOF){
		k=chchar(j,i);
		printf("%c",k);
	}
	return 0;
}
