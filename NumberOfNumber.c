#include<stdio.h>
#include<string.h>
#define max 100002
int main()
{
	int num[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &num[i]);
	}
	long long mul;
	mul = num[0] * num[1] * num[2];
	char real[max]; 
	sprintf(real, "%d", mul);
	char one[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int count[10] = { 0, };
	int size;
	size = strlen(real);
	int i = 0;
	for (i = 0; i < size; i++)
	{
		for(int j = 0; j<10; j++)
		{
			if (real[i] == one[j])
			{
				count[j]++;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", count[i]);
	}
	return 0;
}
