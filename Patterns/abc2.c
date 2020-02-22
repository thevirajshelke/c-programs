/*
A
A B
A B C
A B C D
*/

#include <stdio.h>
int main()
{
	int i, j, n;
	char ch = 'A';
	printf("How many rows you want?\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%c ", ch + j);
		}
		printf("\n");
	}
	return 0;
}
