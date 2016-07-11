#include<stdio.h>
#include<string.h>
int compare(char *p1, char *p2){
	while (*p1==*p2){
		if (*p1 == '\0' || *p2 == '\0'){
			printf("Dissimilar User Input \n Error \n");
			break;
		}
		p1++;
		p2++;
	}
	if (*p1=='\0' && *p2 == '\0'){
		return 0;
	}else if (*p1=='\0'){
		return 1;
	}else if (*p2 == '\0'){
		return -1;
	}
}
int main () {
	int result;
	char p1 [100], p2 [100], final;
	printf("Input first string: ");
	fgets(p1, sizeof(p1),stdin);
	printf("Input second string: ");
	fgets(p2, sizeof(p2),stdin);
	strtok(p2, "\n");
	strtok(p1, "\n");
	result = compare (p1,p2);
	if (result == 0){
		printf("Both strings are the same. \n");
	}else if(result == -1) {
		printf("Input 1 is longer than Input 2. \n");
	}else if (result ==1) {
		printf("Input 1 is shorter than Input 2. \n");
	}
}
