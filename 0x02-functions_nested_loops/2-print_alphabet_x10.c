#include <stdio.h>
/*
* To print the first 10 alphabet
* return(0)
*/

void print_alphabet_x10(void)
{
char alpha;
int counter;

	for(counter=1; counter<=10; counter++)
	{
		for(alpha='a'; alpha<='z'; alpha++)
			{
				putchar(alpha);
			}
		putchar('\n');
	}
}
