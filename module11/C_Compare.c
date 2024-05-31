#include <stdio.h>
#include <string.h>
int main()
{
    char x[100], y[100];
    scanf("%s %s", x, y);
    int count = strcmp(x, y);
    if (count <= 0)
    {
        printf("%s\n", x);
    }
    
    if (count == 0)
    {
        printf("Both are equal");
    }

    return 0;
}