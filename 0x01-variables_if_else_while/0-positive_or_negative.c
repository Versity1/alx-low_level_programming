#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**  
 *main- void
 *if number is greater than zero print n is postive
 *else is is less than zero print number is negative
 *else n is zero
 *return zero
 */

int main(void)
  
{
  int n;
  
  srand(time(0)); 
  n = rand() - RAND_MAX / 2;
  if (n> 0)
    printf("%d is positive\n", n);
  else if (n < 0)
    printf("%d is negative\n", n);
  else
    printf("%d is zero\n", n);
  return (0);
}
