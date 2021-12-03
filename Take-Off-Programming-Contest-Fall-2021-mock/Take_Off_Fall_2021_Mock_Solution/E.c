#include <stdio.h>
int main()
{
    int n, q, i, j, l, r;
    scanf("%d %d", &n, &q);
    int a[n + 1], prefix[n + 1];
    double ans;
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    prefix[0] = 0;
    for (i = 1; i <= n; i++)
        prefix[i] = prefix[i - 1] + a[i];
    while (q--)
    {
        scanf("%d %d", &l, &r);
        ans = (double)(prefix[r] - prefix[l - 1]) / (r - l + 1);
        printf("%.2lf\n", ans);
    }
}
