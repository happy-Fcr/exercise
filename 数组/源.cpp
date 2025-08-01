#include <stdio.h>

int main()
{
	int fcr[5] = {1, 2, 3, 4, 5};
	while (fcr[0] < 6)
	{
		printf("%d ", fcr[0]);
		fcr[0]++;
	}

	return 0;
}