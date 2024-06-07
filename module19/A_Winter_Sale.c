#include <stdio.h>

int main()
{
    float x, p, o;
    scanf("%f %f", &x, &p);
    x = x / 100;
    o = p / (1 - x);
    printf("%.2f", o);

    return 0;
}