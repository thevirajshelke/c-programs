/*
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>
int main()
{
    int i, j, n, c = 1;
    printf("How many rows you want?\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", c++);
        }
        printf("\n");
    }
    return 0;
}
