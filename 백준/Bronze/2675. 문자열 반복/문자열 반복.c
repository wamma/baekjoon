#include <stdio.h>

int main(void)
{
    int T, repeat, size = 0;
    char S[21];

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %s", &repeat, S);

        while (S[size])
            size++;
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < repeat; k++)
                printf("%c", S[j]);
        }
        printf("\n");
        size = 0;
    }
}