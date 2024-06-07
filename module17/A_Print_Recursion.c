#include <stdio.h>

void fun(int p)
{
    if (p == 0)
        return;

    printf("I love Recursion\n");
    fun(p - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}