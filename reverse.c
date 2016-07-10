/*Christopher Liu */
#include <stdio.h>
#include <string.h>

int main()
{
	printf("String: ");
	char string[100];
	fgets(string, 100, stdin);

	char *stringPtr = string;
	char *end_stringPtr = &string[strlen(string)];

	while (*stringPtr != *end_stringPtr)
	{
		printf("%c", *(--end_stringPtr));
	}
	printf("\n");

	return 0;
}
