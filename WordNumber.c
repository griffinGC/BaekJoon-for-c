#include<stdio.h>
#include<string.h>
#define max 1000002
int main()
{
	char line[max] = { NULL };
	int num = 0;
	int count = 0;
	gets(line);
	num = strlen(line);
	for (int i = 0; i < num; i++)
	{
		if ((line[i] == ' ') && (line[i + 1] != ' '))
		{
			count++;
		}
		else if ((line[i - 1] == ' ') && (line[i] == ' '))
		{
			break;
		}
	}
	if (line[0] == ' ')
	{
		count--;
	}
	if (line[num - 1] == ' ')
	{
		count--;
	}

	count++;
	printf("%d", count);
	return 0;
}
