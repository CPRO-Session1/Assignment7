#include <stdio.h>
#include <string.h>

char cat(char *a, char *b){
	char *point = a;

	while(*point != '\0'){
		point ++;
	}

	while (*b!= '\0'){
		*point = *b;
		point ++;
		b++;
	}


}

char comp(char *c, char *d){

	char string1[10];
	char string2[10];

	*c = string1[10];
	*d = string2[10];

	int i, length1, length2;

	length1 = strlen(string1);
	length2 = strlen(string2);


	for(i=0; length1<length2; i++){ 
		if(string1[i] == string2[i]){
			printf("0");
			i++;
		}
		else{
			printf("1");
			break;
		}
	}
}

int main(){
	char a[] = "aly ";
	char b[] = "milich";


	cat(a,b);
	printf("%s\n", a);

	char c[] = "atm";
	char d[] = "atm";

	comp(c,d);

	return 0;
}
