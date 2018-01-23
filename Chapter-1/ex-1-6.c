/* Verify that the expression getchar() != EOF is 0 or 1 */

#include <stdio.h>

int main ()
{
  int c ; 
  int test = (c = getchar()) != EOF;
  printf("Result of getchar()!= EOF %d", test);
  return 0; 
}