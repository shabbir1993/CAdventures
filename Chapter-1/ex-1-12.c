/* Write a program that prints its input one word per line */
#include <stdio.h>
int main () 
{
	int c;
	int state = OUT; 
	while((c=getchar())!=EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
			c = '\n';
			putchar(c);
		}
			
		else
		{
			state = IN;
			putchar(c);
		}
		
	}
	return 0; 
}