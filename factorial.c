#include <stdio.h>
int main()
{
	int n, i = 1, fact = 1;
	printf("Enter the number\n");
	scanf("%d", &n);
	while (i <= n)
	{
		fact = fact * i;
		i++;
	}
	printf("The factorial of %d is %d\n", n, fact);
	return 0;
}
