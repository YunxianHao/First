#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	gets_s(s);
	int i, j = 0, b=0, n;
	n = strlen(s);
	for (i = 0; i < n; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			b = (s[i] - 48) + b * 10;
			if (s[i + 1] < '0' || s[i + 1]>'9')
			{
				s[j] = b;
				j++;
				b = 0;
			}
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", s[i]);
	}
	return 0;
}