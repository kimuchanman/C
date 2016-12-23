#include <stdio.h> 

void even(char str[])
{               
	int i=0,idx=0;                
	while(str[i]){
		if(i%2==0)                                              
			str[idx++]='*';                               
		else                                              
			str[idx++]=str[i];                               
		i++;                
	}                
		str[idx]='\0'; 
	} 

int main(void) 
{                
	char str[1024];                
	printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");                
	scanf("%s",str);                
	even(str);                
               
	printf("str==%s\n",str);                
	return 0; 
}