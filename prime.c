#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1 is neither prime nor composite\n");
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("The number is prime\n");
        }
        else
        {
            printf("The number is composite\n");
        }
    }
    return 0;
}