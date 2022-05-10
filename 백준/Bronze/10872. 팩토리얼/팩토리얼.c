#include <stdio.h>

int recursive(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    return (n * recursive(n - 1));
}

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", recursive(N));
}