#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, a[5][5], x, one, two;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] != 0)
            {
                one = i;
                two = j;
                break;
            }
        }
    }
    x = abs(one - 2) + abs(two - 2);
    printf("%d", x);
    return 0;
}