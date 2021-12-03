#include <stdio.h>
int main()
{
    double n;
    scanf("%lf", &n);
    int m = (int)(n);
    if (n > m)
    {
        printf("%.2lf\n", n);
    }
    else
    {
        printf("%d\n", m);
    }
}