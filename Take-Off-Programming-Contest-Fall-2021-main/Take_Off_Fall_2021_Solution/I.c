#include <stdio.h>
#include <stdlib.h>
typedef long long ll;
ll minimim(ll a, ll b)
{
    if (a < b)
        return a;
    return b;
}
int main()
{
    int T;
    ll i, N, ans;
    scanf("%d", &T);
    for (int j = 0; j < T; j++)
    {
        scanf("%lld", &N);
        ans = 1e18;
        for (i = 1; i * i <= N; i++)
        {
            if (N % i == 0)
            {
                ans = minimim(ans, i + (N / i) - 2);
            }
        }
        printf("Case %d: %lld\n", j + 1, ans);
    }
    return 0;
}
