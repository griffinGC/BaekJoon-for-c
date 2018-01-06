#include<stdio.h>
#include<stdlib.h>
void swap(char a[])
{
	char temp = a[0];
	a[0] = a[2];
	a[2] = temp;
}
int main()
{
	char num1[4] = { 0, };
	char num2[4] = { 0, };
	char temp;
	scanf("%s", &num1);
	scanf("%s", &num2);
	swap(num1);
	swap(num2);
	int numa = atoi(num1);
	int numb = atoi(num2);
	if (numa > numb)
	{
		printf("%d", numa);
	}
	else
	{
		printf("%d", numb);
	}
	return 0;
}
