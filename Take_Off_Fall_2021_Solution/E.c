#include <stdio.h>
int cnt[10007];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (cnt[x] == 1)
            cnt[x] = 0;
        else
            cnt[x] = 1;
    }

    int ans = 0;
    for (int i = 1; i <= 10000; i++)
        ans += cnt[i];

    printf("%d\n", ans);
}
