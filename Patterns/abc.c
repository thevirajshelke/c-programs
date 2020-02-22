#include <stdio.h>
int main()
{
	int i, j, n;
	printf("How many rows you want?\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 65; j <= i + 65; j++)
		{
			printf("%c ", j);
		}
		printf("\n");
	}
	return 0;
}
