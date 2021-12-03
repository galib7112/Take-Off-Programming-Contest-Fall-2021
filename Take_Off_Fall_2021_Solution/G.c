#include <stdio.h>

int main()
{

    int altar_frq, total_movements;
    scanf("%d%d", &altar_frq, &total_movements);

    int winner = 0;

    for (int i = 0; i < total_movements; i++)
    {
        int st, en;
        scanf("%d%d", &st, &en);

        int flg = 1;

        for (int j = st; j <= en; j++)
        {
            if (!(((j + altar_frq - 1) / altar_frq) & 1))
                flg = 0;
        }

        if (flg || (en - st) == 0)
            winner += 1;
    }

    printf("%d\n", winner);

    return 0;
}
