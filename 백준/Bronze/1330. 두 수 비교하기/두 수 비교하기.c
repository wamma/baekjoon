#include <stdio.h>

int main()
{
    int i;
    int j;

    scanf("%d%d", &i, &j);

    if (i > j)
    {
        printf(">");
    }
    else if (i < j)
    {
        printf("<");
    }
    else
    {
        printf("==");
    }
}