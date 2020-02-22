#include <stdio.h>
int main()
{
	int n, sum = 0, rem, bck;
	printf("Enter a number\n");
	scanf("%d", &n);
	bck = n;
	while (n != 0)
	{
		rem = n % 10;
		sum = sum + (rem * rem * rem);
		n = n / 10;
	}
	if (bck == sum)
	{
		printf("The number is armstrong\n");
	}
	else
	{
		printf("The number is not armstrong\n");
	}
	return 0;
}
