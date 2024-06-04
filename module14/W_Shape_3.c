#include <stdio.h>

int main()
{
  int n,k=1;
  scanf("%d", &n);
int s = n-1;
  for (int i = 1; i <= n*2; i++)
  {
    for (int j = 0; j < s; j++)
    {
    printf(" ");
    }
    
    for (int j = 0; j < k; j++)
    {
        printf("*");
    }
    printf("\n");
    if(i<=n){
      k+=2;
      s--;
    }
    if (i>=n)
    {
        k+=-2;
      s++;
    }
  }

  return 0;
}