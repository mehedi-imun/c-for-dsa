#include <stdio.h>
int main()
{
  int n, k = 1;
  scanf("%d", &n);
  int s = n - 1;
  for (int i = 1; i <= (2 * n) - 1; i++)
  {
    for (int j = 1; j <= s; j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= k; j++)
    {
      printf("*");
    }
    printf(" ");
    if (i < n - 1)
    {
      k += 2;
      s--;
    }
    else
    {
      s++;
      k -= 2;
    }
    printf("\n");
  }

  return 0;
}