#include <stdio.h> 
int chchar(int c){         
		int i;         
	if(c>=0x41 && c<=0x59){                 
		i=c+1;         
	}else if(c==0x5a){
        	i=0x41;        
	}else{                 
		i=c;         
	}              
	return i; 
} int main(void){         
	int i,j;         
	while((i=getchar()) !=EOF){                 
		j=chchar(i);                 
		printf("%c",j);         
	}         
	return 0; 
}