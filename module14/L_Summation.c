#include <stdio.h>

int fun(int * arr,int n){
    if(n == 0) return arr[0];
    return arr[n] + fun(arr,n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int res = fun(arr,n-1);
    printf("%d",res);
    
    return 0;
}