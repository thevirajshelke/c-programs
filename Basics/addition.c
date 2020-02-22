/**************************************************
 * File: c-programs/Basics/addition.c
 * Name: Viraj Shelke <virajshelkepro@gmail.com>
 * Date: 2020-17-02
 * Desc: This is just a basic program which adds
         two numbers and displays them on the screen.
***************************************************/

#include <stdio.h>
/*
int main(){
    int a = 10, b = 20, c;
    c = a + b;
    printf("The addition of %d & %d is %d\n", a, b, c);
    return 0;
}
int main(){
    int a = 10, b = 20;
    printf("The addition of %d & %d is %d\n", a, b, a + b);
    return 0;
}
int main(){
    int a, b, c;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    c = a + b;
    printf("The addition of %d & %d is %d\n", a, b, c);
    return 0;
}
*/
int main()
{
    int a, b, c;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("The addition of %d & %d is %d\n", a, b, a + b);
    return 0;
}