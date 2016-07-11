#include <stdio.h>
#include <string.h>

void sReverse(char a[])
{
	char *ptrStart = a;
	char *ptrEnd = ptrStart + strlen(a) - 1;
	int i;
	for (i = 0; *ptrStart != *ptrEnd; i++)
	{
		printf("%c", *ptrEnd);
		ptrEnd--;
	}
	printf("%c", a[0]);
}

int main()
{
	printf("Enter a string. Through some shenanigans I don't understand, it should be reversed.\n");
	char word[100];
	fgets(word, sizeof(word), stdin);
	sReverse(word);
	return 0;
}

