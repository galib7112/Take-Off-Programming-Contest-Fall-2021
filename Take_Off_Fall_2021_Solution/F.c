#include <stdio.h>
#include <string.h>

char s[1005], str[1005], mp[300], ch;
int mark[300];
char alph[] = "abdefhlmnopqstuwxyz";
char altalph[] = "eqpafylwuodbstnmxhz";
int main()
{
    int t, cases = 0, n, flag, i, j;
    for (i = 0; i < 19; i++)
    {
        mark[alph[i]] = 1;
        mp[alph[i]] = altalph[i];
    }
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", s);
        n = strlen(s);
        str[n] = '\0';
        flag = 1;
        for (i = 0; i < n; i++)
        {
            if (!mark[s[i]])
            {
                flag = 0;
                break;
            }
            str[i] = mp[s[i]];
        }
        if (flag == 0)
        {
            printf("NO\n");
            continue;
        }
        for (i = 0, j = n - 1; i <= j; i++, j--)
        {
            ch = str[i];
            str[i] = str[j];
            str[j] = ch;
        }
        if (strcmp(str, s))
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
