#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[1000001];
        scanf("%s", s);
        int small = 0, capital = 0, digits = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digits++;
            }
        }
        printf("%d %d %d\n", capital, small, digits);
    }

    return 0;
}