#include<stdio.h>

int strcmp(char*,char*);
char* strct(char*,char*);



int main(){

	printf("\n");
	char *a = {"Hello"};
	char *b = {"World"};
	 int aa=strcmp(a,b);
	printf("%d",aa);
	printf("\n");
	return 0;
}

char * strct(char *one, char *two){
	char a[(sizeof(one)+sizeof(two)-4)];
	int i=0;
	while(*one!='\0'){
		a[i]=*one;
		one++;
		i++;
	}
	while(*two!='\0'){
		a[i]=*two;
		two++;
		i++;
	}
	a[i]='\0';
	one=a;
	return one;
}


int strcmp(char* one,char* two){

	while(*one==*two){
		one++;
		two++;
	}
	return ((int)(*one)-(int)(*two));
}
	













