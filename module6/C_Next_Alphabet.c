#include <stdio.h>

int main()
{
    char n;
    int b = 97;
    scanf("%c", &n);
    // printf("%d",n);
    if (n == 'z')
    {
        printf("%c", b);
    }
    else
    {
        printf("%c", n+1);
    }
    return 0;
}