#include<stdio.h>
#include<string.h>
#define max 100
int main(void)
{
	int n;
	int len;
	scanf("%d", &n);
	int count = n;
	for (int i = 0; i < n; i++)
	{
		int alpha[max] = { 0, };
		char word[max] = { 0, };
		scanf("%s", &word);
		len = strlen(word);
		int prev = -1;
		int now = 0;
		for (int j = 0; j < len; j++)
		{
			now = word[j] - 'a';
			if ((now != prev) && (alpha[now] != 0))
			{
				count--;
				break;
			}
			prev = now;
			alpha[now]++;
		}
	}
	printf("%d", count);
	return 0;
}
