#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            sum1 = sum1 + arr[i];
        }
        else
        {
            sum2 = sum2 + arr[i];
        }
    }

    printf("%d %d", sum1, sum2);

    return 0;
}