#include<stdio.h>
#include<string.h>
#define max 100002
int main()
{
	char word[max];
	scanf("%s", word);
	int length = 0;
	int arr[26];
	length = strlen(word);
	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}
	for (int i = 0; i < length; i++)
	{
		if (arr[word[i] - 'a'] >= 0)
			continue;
		arr[word[i] - 'a'] = i;
		
	}
	for (int j = 0; j <= 'z' - 'a'; j++)
	{
		printf("%d ", arr[j]);
	}

	return 0;
}
