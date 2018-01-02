#include<stdio.h>
#define max 21
void repeater(int num, char name[])
{
	for (int j = 0; name[j] != NULL; j++)
	{
		for (int k = 0; k < num; k++)
		{
			printf("%c", name[j]);
		}
	}
}
int main()
{
	int repeat;
	char name[max];
	int num = 0;
	scanf("%d", &repeat);
	int k = 0;
	for (int i = 0; i < repeat; i++)
	{
		scanf("%d", &num);
		scanf("%s", &name);
		repeater(num, name);
		printf("\n");
	}
	return 0;
}
