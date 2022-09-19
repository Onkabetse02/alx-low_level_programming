#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Takes a pointer to an int ans updates
 *               the value it points to 98
 * @n: The pointer to an int
 */
int main(void)
{
  int n;

  n = 402;
  printf("n=%d\n", n);
  reset_to_98(&n);
  printf("n=%d\n", n);
  return (0);
}
