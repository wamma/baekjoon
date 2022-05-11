#include <stdio.h>

int main(void)
{
    int i, j, k, n, m; // n장의 카드, m과 인접하게 더하기
    int sum = 0, max = 0;
    int arr[100];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                sum = arr[i] + arr[j] + arr[k];

                if (max < sum && sum <= m)
                    max = sum;
            }
        }
    }
    printf("%d", max);
}