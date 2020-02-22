#include <stdio.h>
int main()
{
	int n, sum = 0, rem;
	printf("Enter a number\n");
	scanf("%d", &n);
	while (n != 0)
	{
		rem = n % 10;
		sum = sum + rem;
		n = n / 10;
	}
	printf("The sum of digits is: %d\n", sum);
	return 0;
}
