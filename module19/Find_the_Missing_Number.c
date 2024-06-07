#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int x = a * b * c;

        if (x == 0)
        {
            if (m == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
            continue;
        }

        if (m % x == 0)
        {
            long long int d = m / x;
            printf("%lld\n", d);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
