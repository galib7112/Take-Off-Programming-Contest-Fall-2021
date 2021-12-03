#include <stdio.h>

int numberOfDivisor(int n)
{
    int ret = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ret++;

            if (n / i != i)
                ret++;
        }
    }

    return ret;
}

int main()
{
    int t, ca = 1;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        int a[n + 1][m + 1], div[505];

        for (int i = 1; i <= 500; i++)
            div[i] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                scanf("%d", &a[i][j]);
                div[numberOfDivisor(a[i][j])]++;
            }
        }

        printf("Case %d: ", ca++);

        for (int i = 500; i >= 1; i--)
        {
            if (div[i] != 0)
            {
                printf("%d %d\n", i, div[i]);

                break;
            }
        }
    }
    return 0;
}
