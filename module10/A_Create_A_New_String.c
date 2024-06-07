#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    char t[1001];
    scanf("%s", s);
    scanf("%s", t);
    long long int siz = 0, siz2 = 0;
    siz = strlen(s);
    siz2 = strlen(t);
    printf("%lld %lld\n", siz, siz2);
    printf("%s %s", s, t);
    return 0;
}