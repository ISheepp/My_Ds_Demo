#include <stdio.h>
#include <math.h>
int main()
{
    int n, m, t, hun, dec, ind, sum, x;

    while (~scanf("%d %d", &m, &n))
    {
        if (m > n)
        {
            t = m;
            m = n;
            n = t;
        }
        for (x = 0; m < n + 1; m++)
        {
            hun = m / 100;
            dec = m % 100 / 10;
            ind = m % 10;
            sum = pow(hun, 3) + pow(dec, 3) + pow(ind, 3);
            if (m == sum)
            {
                if (x > 0) //当中要空格，最后不能有空格。
                {
                    printf(" ");
                }
                x += 1;
                printf("%d", m);
            }
        }

        if (x == 0)
        {
            printf("no\n");
        }
        else
        {
            printf("\n");
        } //最后一定要有换行，以上应该就是所有可能出现presentation error的地方
    }
    return 0;
}