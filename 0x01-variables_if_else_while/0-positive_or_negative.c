#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
       int n;

       srand(time(0));
       n = rand() - RAND_MAX / 2;
       /* your code goes there */
       if (num < 0.0)
	  printf("You entered a negative number.");
       else if (num > 0.0)
	  printf("You entered a positive number.");
       else
	  printf("You entered 0.");
       return (0);
}
