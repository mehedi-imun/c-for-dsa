#include <stdio.h>

int main()
{
  int n,k=1;
  scanf("%d", &n);
  int space = n-1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < space; j++)
    {
        printf(" ");
    }
    
   for (int j = 1; j <= k; j++)
   {
    printf("*");
   }
   k+=2;
   space --;
   printf("\n");
   
  }

  return 0;
}