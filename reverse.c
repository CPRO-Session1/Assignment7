#include <stdio.h>
#include <string.h>

void recursive(char* begin){
	char* end;
	char a;
	
	end=begin+strlen(begin)-1;

	while(begin<end){
		a=*end;
		*end=*begin;
		*begin=a;
		*begin++,*end--;
	}
}

int main(){
	char string;
	printf("Please enter a string within 20 characters:\n");
	fgets(string,20,stdin);
	recursive(string);
	printf("%s",string);
	return 0;
}
