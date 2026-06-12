#include <stdio.h>
#include <string.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    char word1[] = "horse";
    char word2[] = "ros";

    int m = strlen(word1);
    int n = strlen(word2);

    int dp[m + 1][n + 1];

    int i, j;

    for(i = 0; i <= m; i++)
        dp[i][0] = i;

    for(j = 0; j <= n; j++)
        dp[0][j] = j;

    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(word1[i - 1] == word2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1 +
                           min(
                               dp[i - 1][j - 1],   // Replace
                               min(
                                   dp[i - 1][j],    // Delete
                                   dp[i][j - 1]     // Insert
                               )
                           );
            }
        }
    }

    printf("%d", dp[m][n]);

    return 0;
}
