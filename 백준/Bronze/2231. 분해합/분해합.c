#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int tmp = i;
        int num = i;

        while (tmp > 0)
        {
            num = num + (tmp % 10);
            tmp = tmp / 10;
        }
        if (num == n)
        {
            printf("%d", i);
            n = 0;
            break;
        }
    }
    if(n != 0)
        printf("0");
}