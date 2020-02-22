#include <stdio.h>
int main()
{
	int n, rev = 0, rem, bck;
	printf("Enter a number\n");
	scanf("%d", &n);
	bck = n;
	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	if (bck == rev)
	{
		printf("The number is palindrome\n");
	}
	else
	{
		printf("The number is not palindrome\n");
	}
	return 0;
}
