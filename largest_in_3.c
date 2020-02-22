#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &a, &b, &c);

    // check if all the numbers are different
    if (a != b && b != c && a != c)
    {
        // find out the biggest number by comparing one number with other two
        if (a > b && a > c)
        {
            printf("The largest number is: %d\n", a);
        }
        else if (b > a && b > c)
        {
            printf("The largest number is: %d\n", b);
        }
        else if (c > a && c > b)
        {
            printf("The largest number is: %d\n", c);
        }
    }
    else
    {
        // since the numbers entered are different checking if all are same
        if (a == b && b == c)
        {
            printf("All of the numbers are same\n");
        }
        // since all are not same and all are not different two of them have to be same
        else if (a == b)
        {
            // comparing the one which is not same with the same ones
            if (a > c)
            {
                printf("The largest number is: %d\n", a);
            }
            else
            {
                printf("The largest number is: %d\n", c);
            }
        }
        else if (b == c)
        {
            // comparing the one which is not same with the same ones
            if (b > a)
            {
                printf("The largest number is: %d\n", b);
            }
            else
            {
                printf("The largest number is: %d\n", a);
            }
        }
        // obviously a & c has to same so not need to check
        else
        {
            // comparing the one which is not same with the same ones
            if (a > b)
            {
                printf("The largest number is: %d\n", a);
            }
            else
            {
                printf("The largest number is: %d\n", b);
            }
        }
    }
    return 0;
}