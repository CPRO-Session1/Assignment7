#include <stdio.h>
#include <string.h>

int main(){
	char string[20];
	printf("Please enter a string within 20 characters:\n");
	fgets(string,sizeof(string),stdin);
	char* begin;
	char* end;
	char a;
	begin=string;
	end= begin + strlen(string)-1;
	
	while(begin<end){
		a=*end;
		*end=*begin;
		*begin=a;
		begin++;
		end--;
	}

	printf("%s",string);
	return 0;
}
