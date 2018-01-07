#include<stdio.h>
#define max 16
int main()
{
	char word[max] = { 0, };
	scanf("%s", &word);
	int num = 0;
	int total = 0;
	for (int i = 0; word[i]; i++)
	{
		int now = word[i] - 'A';
		if (now >= 0 && now <= 2)
		{
			num = 3;
		}
		else if (now >= 3 && now <= 5)
		{
			num = 4;
		}
		else if (now >= 6 && now <= 8)
		{
			num = 5;
		}
		else if (now >= 9 && now <= 11)
		{
			num = 6;
		}
		else if (now >= 12 && now <= 14)
		{
			num = 7;
		}
		else if (now >= 15 && now <= 18)
		{
			num = 8;
		}
		else if (now >= 19 && now <= 21)
		{
			num = 9;
		}
		else if (now >= 22 && now <= 25)
		{
			num = 10;
		}
		total = total + num;
	}
	printf("%d", total);
	return 0;
}
