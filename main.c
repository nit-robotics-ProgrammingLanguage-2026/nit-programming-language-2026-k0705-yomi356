
#include <stdio.h>
#include <stdlib.h>

// 最大公约数を求める関数
int gcd(int m, int x)
{
    int r;

    m = abs(m);
    x = abs(x);

    while (x != 0)
    {
        r = m % x;
        m = x;
        x = r;
    }

    return m;
}

int main(void)
{
    int input_number;
    int result;
    int limit = 9966990;

    scanf("%d", &input_number);

    if (input_number > limit)
    {
        printf("NG");
        return 0;
    }

    result = gcd(limit, input_number);

    printf("%d", result);

    return 0;
}
