#include <stdio.h>
#include <string.h>

int main() {
	printf("Enter 2 names to sort:\n");
	char fn[2][100];
	char ln[2][50];
	char full[2][100];
	char temp[50];
	int b = 0;
	char *ptr = fn[b];
	for (int a = 0; a < 2; a ++){
		ptr = fn[b];
		printf("Person %d:\n", (a+1));
		printf("First name: ");
		scanf("%s", fn[a]);
		printf("Last name: ");
		scanf("%s", ln[a]);
		while (*ptr != '\0'){
			ptr++;
		}
		*ptr = ' ';
		*ptr ++;
		*ptr = '\0';
		strcat(fn[a], ln[a]);
		printf("Full name: %s\n\n", fn[a]);
		b ++;
	}
	printf("Here are the names in alphabetical order:\n");
	int compare = strcmp(fn[0], fn[1]);
	if (compare > 0)
		printf("%s\n%s\n",fn[1], fn[0]);
	else if (compare < 0)
		printf("%s\n%s\n", fn[0], fn[1]);
	return 0;
}
