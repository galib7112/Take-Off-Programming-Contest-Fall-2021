#include <stdio.h>
int main()
{
    int N;

    scanf("%d", &N);

    if (N == 4)
        printf("Invalid\n");
    else if (N % 3 == 0)
        printf("Equilateral\n");
    else
        printf("Isosceles\n");
}