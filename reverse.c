#include <stdio.h>
#include <string.h>

void stringReversal(char *input)
{
	 char *ptrBegin = input, *ptrEnd = ptrBegin + strlen(input) - 1;
         for (; ptrBegin <=  ptrEnd; --ptrEnd)
         {
		 if (*ptrEnd == '\n')
		 {
		 	continue;
		 }
		 printf("%c", *ptrEnd);
                 
	}

}

int main()
{
	printf("Write anything you want!\n");
	char input[1000] = {};
	int i;
	fgets(input, sizeof(input),  stdin);
	for (i = 0; i < strlen(input); i++)
	{
		if (input[i] == '\n' || input[i] == '\0')
		{
			i--;
			break;
		}
	}
	stringReversal(input);
	printf("\n");
	return 0;
}
