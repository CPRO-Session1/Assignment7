#include<stdio.h>
#include<string.h>
void reverse(char *input){
	int length, i;
	char *start, *stop, temp;
	length = strlen(input);
	start=input;
	stop=input;
	for(i=0;i<length-1;i++){
		stop++;
	}
	for(i=0;i<length/2;i++){
		temp=*stop;
		*stop=*start;
		*start=temp;
		start++;
		stop--;
	}
}
int main() {
	char input[200];
	printf("Please input string: \n");
	fgets(input,sizeof(input),stdin);
	strtok(input,"\n");
	reverse(input);
	printf("The reverse is: \n");
	printf("%s \n", input); 
}
