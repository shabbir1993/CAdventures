/* Write a program to copy its input to output replacing each tab by \t, 
each backspace by \b, and each backlash by \\. This make tabs and backspaces
visible in an unambigous way */

#include <stdio.h>

int main () 
{
	int c; 
	while((c = getchar()) != EOF)
	{
		if(c=='\t')
		{	
			putchar('\\');
			putchar('t');
		}

		else if(c==10) {
			putchar('\\');
			putchar('b');
		}

		else if(c=='\\') 
		{
			putchar(c);
			//putchar(c);
		}
		putchar(c);
	}
	return 0; 
}