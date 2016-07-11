#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

char flip (char *stranc){ 

	char *start = stranc; 
	char *end = start + strlen(stranc) - 1; 
	for (; end>=start; end--){
		printf("%c", *end);
	}
	printf("\n"); 
return *end;  

}


int main(){

        char stranc[1000] = {};
         
	

        printf("Enter the string you would like to reverse\n"); 
	fgets(stranc, sizeof(stranc), stdin);

flip(stranc); 

	return 0; 
}
