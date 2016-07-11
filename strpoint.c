//Bettina Benitez
#include <stdio.h>
#include <string.h>

void strCat (char *a, char *b) {
	char *p = a;
	while (*p != '\0') {
		p++;
	}
	strcat(a, b);
	*p--;
	*p = ' ';
	printf("%s", a);
}

void strCmp(char *a, char *b) {
	if (strcmp(a, b) == 0)
		printf("Words are the same\n");
	else
		printf("Words are the same\n");
}

int main () {
	char aUserIn[100], bUserIn[100], strOpt[100];
	printf("Enter first word: ");
	fgets(aUserIn, sizeof(aUserIn), stdin);
	printf("Enter second  word: ");
	fgets(bUserIn, sizeof(bUserIn), stdin);
	printf("Choose to concatenate or compare: ");
	fgets(strOpt, sizeof(strOpt), stdin);
	char con[100] = "concatenate\n";
	char com[100] = "compare\n";
	if (strcmp(strOpt, con) == 0)
		strCat (aUserIn, bUserIn);
	else if (strcmp(strOpt, com) == 0)
		strCmp(aUserIn, bUserIn);
	else
		printf("Error: %s is not an option\n", strOpt);
	return 0;
}
