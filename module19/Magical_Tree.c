#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);
    int temp = N;
    N = (N - 1) / 2 + 6;
    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N - i - 1; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < temp; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
