#include <stdio.h>
int main()
{
    int k, x;
    scanf("%d %d", &k, &x);
    printf("%d\n", k / x + k % x);
    return 0;
}