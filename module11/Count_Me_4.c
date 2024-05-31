#include <stdio.h>

int main()
{
    char s[10001];
    scanf("%s", s);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count++;
        }
    }
    printf("%c");
     return 0;
}