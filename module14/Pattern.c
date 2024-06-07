#include <stdio.h>

int main()
{

    int n, k = 1;
    scanf("%d", &n);
    int space = n - 1;
    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        if (i % 2 == 0)
        {
            for (int j = 0; j < k; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 0; j < k; j++)
            {
                printf("-");
            }
        }
        if (i < n - 1)
        {
            k = k + 2;
            space--;
        }
        else
        {
            k = k - 2;
            space++;
        }
        printf("\n");
    }

    return 0;
}