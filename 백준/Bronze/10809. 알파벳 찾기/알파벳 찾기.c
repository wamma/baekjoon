#include <stdio.h>
#include <string.h>

int main()
{
    char S[100];
    int num[26];

    scanf("%s", S);

    for (int i = 0; i < 26; i++)
        num[i] = -1;

    for (int i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < strlen(S); j++)
        {
            if (i == S[j])
            {
                num[S[j] - 'a'] = j;
                break;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", num[i]);
    }
}