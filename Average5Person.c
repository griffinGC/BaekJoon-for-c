#include<stdio.h>
int main()
{
	int num[5] = { 0, };
	int avr = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] <= 40)
		{
			num[i] = 40;
		}
		avr = avr + num[i];
	}
	printf("%d", avr / 5);

	return 0;
}
