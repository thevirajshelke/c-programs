#include <stdio.h>
int main()
{
	int num, i;
	printf("Enter a number\n");
	scanf("%d", &num);
	printf("The table is as follows:\n");
	for (i = 1; i <= 100; i++)
	{
		printf("%d * %d = %d\n", num, i, i * num);
	}
	return 0;
}
