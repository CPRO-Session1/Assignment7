/* Matthew Danielson
*  7/8/16
*  Pointers Practice
*  name: exercise.c
*/
#include <stdio.h>

int strcmp(char[], char[]);
void  strct(char[], char[]);

int main(){
	char *s1 = {"Hey"};
	char *s2 = {"all"};
	strct(s1,s2);
	return 0;
}

int strcmp(char array1[4], char array2[4]){
	int toreturn = 0;
	for(int x = 0; x< 20; x++){
		if(array1[x] != array2[x]){
			if(array1[x] > array2[x])
				toreturn = -1;
			if(array1[x] < array2[x])
				toreturn = 1;
			break;
		}
	return toreturn;
	}
}

void strct(char array1[4], char array2[4]){
	char array3[sizeof(array1) + sizeof(array2)-2];
	int x = 0;
	printf("%d\n", (int)sizeof(array1));
	for(; array1[x] != '\0';x++){
		array3[x] = array1[x];
	}
	for(int y = 0;y<sizeof(array2); x++){
		array3[x] = array2[y];
		y++;
	}
	printf("%s\n", array3);



	
}
