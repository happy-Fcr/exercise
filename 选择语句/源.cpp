#include <stdio.h>
int main()
{
	int input = 0;
	printf("��ϲ���������(1/0)");
	scanf_s("%d", &input);
	if (input == 1)
		printf("yes");
	else 
		printf("no");

	return 0;
}