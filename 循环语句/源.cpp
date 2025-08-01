#include <stdio.h>
int main()
{
	int line = 0;
		while (line < 99999)
		{
			printf("working%d\n", line);
				line++;
		}
	if (line == 99999)
	{
		printf("offer\n");
	}
	else
	{
		printf("error\n");
	}



	return 0;
}