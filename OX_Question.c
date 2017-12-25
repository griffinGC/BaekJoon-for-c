#include<stdio.h>
#include<string.h>
#define max 10002
int main(void)
{
	int num;
	char ox[max];
	int total;
	int sum = 0;
	int fi[max];
	int count = 1;
	scanf("%d", &num);
	for (int j = 0; j < num; j++)
	{
		scanf("%s", &ox);
		int total = strlen(ox);
		sum = 0;
		count = 1;
		for (int i = 0; i < total; i++)
		{
			
			if (ox[i - 1] == 'O' && ox[i] == 'O')
			{
				count = count + 1;
				sum = sum + count;
			}

			 else if (ox[i] == 'O')
			{
				sum++;
			}

			else if ((ox[i - 1] == 'O') && (ox[i] == 'X'))
			{
				count = 1;
			}
		}
		fi[j] = sum;

	}
	for (int i = 0; i < num; i++)
	{
		printf("%d\n", fi[i]);
	}
	return 0;
}
