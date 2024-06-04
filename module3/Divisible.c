#include <stdio.h>
int main()
{
   int n;
    scanf("%d", &n);
  for (int i = 1; i < n; i++)
  {
      if (n % 3 == 0 || n % 7 == 0 )
    {
        printf("%d\n",n);
    }
    
  }
  
    
    return 0;
}