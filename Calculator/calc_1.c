/**************************************************
 * File: c-programs/Calculator/calc_1.c
 * Name: Viraj Shelke <virajshelkepro@gmail.com>
 * Date: 2020-17-02
 * Desc: Calculator program with else if ladder.
***************************************************/

#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("Select any one of the following:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("The addition of %d & %d is %d\n", a, b, a + b);
    }
    else if (choice == 2)
    {
        printf("The subtarction of %d & %d is %d\n", a, b, a - b);
    }
    else if (choice == 3)
    {
        printf("The multiplication of %d & %d is %d\n", a, b, a * b);
    }
    else if (choice == 4)
    {
        if (b == 0)
        {
            printf("Division by zero is Not Defined!\n");
        }
        else
        {
            printf("The division of %d & %d is %d\n", a, b, a / b);
        }
    }
    else
    {
        printf("Invalid Input\n");
    }
    return 0;
}