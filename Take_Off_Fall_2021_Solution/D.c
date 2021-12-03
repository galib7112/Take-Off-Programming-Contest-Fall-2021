#include <stdio.h>

int main()
{
    int n, x, y, z, c, p1, p2, p3;
    scanf("%d %d %d %d %d", &n, &x, &y, &z, &c);
    y = y + x;
    z = z + y;
    p1 = c;
    p2 = c * c;
    p3 = c * c * c;
    if (x == p1 || x == p2 || x == p3)
        printf("Eliminated on 1st hop\n");
    else if (y == p1 || y == p2 || y == p3)
        printf("Eliminated on 2nd hop\n");
    else if (z == p1 || z == p2 || z == p3 || z < n + 1)
        printf("Eliminated on 3rd hop\n");
    else
        printf("Safe\n");
}
