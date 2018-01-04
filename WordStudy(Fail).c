#include<stdio.h>
#include<string.h>
#define max 1000000
int main()
{
	char word[max];
	scanf("%s", &word);//문자받기
	int le = strlen(word);//문자길이
	int count['z'-'a'] = { 0, };
	for (int i = 0; i < le; i++)//문자 비교
	{
		for (int j = 0; j < 'z'-'a'; j++)
		{
			if (('a'+j == word[i]) || ( 'A'+j == word[i]))
			{
				count[j]++;
			}
		}
	}
	//정렬
	for (int i = 0; i < 'z' - 'a'; i++)
	{
		int temp;
		for (int j = 1; j < 'z' - 'a'; j++)
		{
			if (count[i] < count[j])
			{
				temp = count[i];
				count[i] = count[j];
				count[j] = temp;
			}
		}
	}
	//같은거 있는지 확인
	for (int i = 1; i < 'z' - 'a'; i++)
	{
		if (count[0] == count[i])
		{
			printf("?");
			return;
		}
	}
	printf("%d", count[0]);
	return 0;
}
