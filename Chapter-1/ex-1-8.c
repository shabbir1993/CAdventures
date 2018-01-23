/* Write a program to count the blanks , tabs and newlines */
#include <stdio.h>

int main () 
{
	int c , nl, nt, ns ;
	nl = 0;
	nt = 0;
	ns = 0;

	while((c=getchar())!=EOF)
		if(c=='\t')
			++nt;
		else if(c=='\n')
			++nl;
		else if(c==' ')
			++ns;
	
	printf("\nTabs : %d\n", nt);
	printf("Lines : %d\n", nl);
	printf("Spces : %d\n", ns);
	
	return 0; 
}