#include <stdio.h> 
int chchar(int c){              
	int i;              
	if(c>=0x61 && c<0x7a){                           
		i=c+1;              
	}else if(c==0x7a){                           
		i=0x61;              
	}else{                           
		i=c;              
	}              
	return i; 
} 
int main(void)
{              
	int i,j;              
	while((i=getchar()) !=EOF)
	{                           
		j=chchar(i);
        	printf("%c",j);
	}              
	return 0; 
}