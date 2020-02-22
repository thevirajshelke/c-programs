/**************************************************
 * File: c-programs/Basics/division.c
 * Name: Viraj Shelke <virajshelkepro@gmail.com>
 * Date: 2020-17-02
 * Desc: This is just a basic program which divides
         two numbers and displays them on the screen.
***************************************************/

#include <stdio.h>
/*
int main(){
    int a = 10, b = 2, c;
    c = a / b;
    printf("The division of %d & %d is %d\n", a, b, c);
    return 0;
}
int main(){
    int a = 10, b = 2;
    printf("The division of %d & %d is %d\n", a, b, a / b);
    return 0;
}
int main(){
    int a, b, c;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    if(b==0){
        printf("Division by zero is Not Defined!\n");
    }
    else{
        c = a / b;
        printf("The division of %d & %d is %d\n", a, b, c);
    }
    return 0;
}
*/
int main()
{
    int a, b, c;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    if (b == 0)
    {
        printf("Division by zero is Not Defined!\n");
    }
    else
    {
        printf("The division of %d & %d is %d\n", a, b, a / b);
    }
    return 0;
}