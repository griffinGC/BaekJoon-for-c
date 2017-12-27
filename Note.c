#include<stdio.h>
int main()
{
	int number1[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int number2[8] = { 8, 7, 6, 5, 4, 3, 2, 1 };
	int def[8];
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &def[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		if (def[i] == number1[i])
		{
			count1++;
		}
		else if (def[i] == number2[i])
		{
			count2++;
		}
	}
	if (count1 == 8)
	{
		printf("ascending");
	}
	else if (count2 == 8)
	{
		printf("descending");
	}
	else
	{
		printf("mixed");
	}
	return 0;
}
