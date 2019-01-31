#include <stdio.h>

#define OUT 1
#define IN 0

main() {

    int c;

    while((c=getchar())!=EOF)
    {
        if( c == ' ' || c == '\n' || c == '\t')
          putchar('\n');
        else
          putchar('=');
    }

   
}
