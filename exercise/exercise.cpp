#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
	int i;
	int sum = 0;
	char ch[2] = {'z'};//初始化
	printf("Plese inter some numbers with space to seperate:");
	while (true)
	{
		if (scanf_s("%d", &i) == 1)
		{
			sum += i;
			while ((ch[0] = getchar()) == ' ')
			{
				;//Nothing to do to skip the space.
			}
			if (ch[0] == '\n')
			{
	break;
			}
			ungetc(ch[0], stdin);
		}
		else
		{
			MessageBox(
				NULL,
				(LPCWSTR)L"Plese inter number or some space instead of others.\nDo you want to try again?",
				(LPCWSTR)L"Fail",
				MB_OK|MB_SYSTEMMODAL
			);
			exit(0);
		}
	}
	printf("The result is %d", sum);
}
