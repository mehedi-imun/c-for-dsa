#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int x,y;
  // f
  
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d %d", &x,&y);
    arr[x]=y;
    for (int i = n-1; i >= 0; i--)
    {
      printf("%d ",arr[i]);
    }
    

    return 0;
}