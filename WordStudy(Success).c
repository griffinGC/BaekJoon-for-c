#include<stdio.h>
#include<string.h>
#define max 1000000
int main()
{
	char word[max];
	scanf("%s", &word);//문자받기
	int le = strlen(word);//문자길이
	int tt; // 일시적으로 값저장용
	int count[26] = { 0, };
	int maximum = 0;
	for (int i = 0; i < le; i++)//문자 비교
	{
		for (int j = 0; j < 26; j++)
		{
			if (('a'+j == word[i]) || ( 'A'+j == word[i]))
			{
				count[j]++;
			}
		}
	}//문자비교 완료 이제 가장 큰 알파벳을 찾아야함!
	for (int i = 0; i < 26; i++)
	{
		if (maximum <= count[i])
		{
			maximum = count[i];
			tt = i;
		}
	}
	 //정렬
	for (int i = 0; i < 26; i++)
	{
		int temp;
		for (int j = 1; j < 26; j++)
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
	for (int i = 1; i < 26; i++)
	{
		if (count[0] == count[i])
		{
			printf("?");
			return;
		}
	}
	printf("%c", tt + 'A');
	return 0;
}
