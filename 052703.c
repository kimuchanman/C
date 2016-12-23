#include <stdio.h> 

void rev_string(char str[])
{               
	int i=0,idx=2;                
	while(str[i]) {
		for(idx=2;idx>=0;idx--)                             
		str[idx]=str[i++];
	}
} 

int main(void) 
{                

	char str[1024];                
	printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");                
	scanf("%s",str);                
	rev_string(str);               
               
	printf("str==%s\n",str);                
	return 0; 
}