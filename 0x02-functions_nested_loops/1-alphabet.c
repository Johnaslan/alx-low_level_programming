#include <stdio.h>

/** a program to print alphabet
*return (0)
*/

void print_alphabet(void)
{
  char alpha;
  alpha ='a';
  while (alpha<='z')
    {
      putchar(alpha);
      alpha++;
	}
 putchar('\n');
}
