/*Sean Kee*/
/*String Functions*/

#include <stdio.h>

void stringcat(char *str1, char *str2) {
	while (*str1 != '\n') {
		str1++;
	}
	while (*str2 != '\n') {
		*str1 = *str2;
		str2++;
		str1++;
	}
	*str1 = '\0';

}

int stringcmp(char *str1, char *str2) {
	while (*str1 != '\n' || *str2 != '\n') {
		if (*str1 == *str2) {
			str1++;
			str2++;
		}
		else 
			return 1;
	}
	return 0;
}

int main() {
	int menu = 1;
	int option;
	char input1[100];
	char input2[100];
	int returned;
	printf("Input String 1\n#: ");
	fgets(input1, sizeof(input1), stdin);
	printf("Input String 2\n#: ");
	fgets(input2, sizeof(input2), stdin);

	while (menu == 1) {
		printf("\nWhat would you like to do?\n1: Concatenate Strings\n2: Compare Strings\n3: Exit\n#: ");
		scanf("%d", &option);
		switch(option) {
			case 1:
				stringcat(input1, input2);
				printf("\nNew String: %s\n", input1);
				break;
			case 2:
				returned = stringcmp(&input1, &input2);
				if (returned == 0)
					printf("\nIdentical Strings\n");
				else
					printf("\nNot Identical Strings\n");
				break;
			case 3:
				menu = 0;
				break;
		}
	}
}
