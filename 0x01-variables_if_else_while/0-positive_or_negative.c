#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	switch(n)
	  {
	  case 1 ... INT_MAX:
        printf("%d is positive\n");
	    break;
	  case INT_MIN .. -1:
        printf("%d is negative\n");
	    break;
	  case 0:
	    printf("%d is zero\n", n);
	    break;
	  }
	
	return (0);
}
