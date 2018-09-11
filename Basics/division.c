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