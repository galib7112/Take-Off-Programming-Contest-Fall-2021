#include <stdio.h>

int main()
{
    int D, X, t, a, diff, dis;
    scanf("%d %d", &D, &X);
    scanf("%d %d", &a, &t);
    diff = D - X;
    dis = a * t * t;
    double di = (double)dis / 2.0;
    if (di >= diff)
        printf("Allah bachaise\n");
    else
        printf("Moira gesi,Keu nara dis na!!!\n");
    return 0;
}
