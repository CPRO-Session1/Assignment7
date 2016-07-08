#include<stdio.h>
#include<string.h>
char *cat (char *p1, char *p2){
	int i=0, p3= strlen(p1);
	while(p2[i]!='\0'){
			p1[p3]=p2[i];
			p3++;
			i++;
	}
	p1[p3]='\0';
	return p1;
}

int main(){
	char p1[50], p2[50];
	printf("Enter first string: ");
	fgets(p1,sizeof(p1),stdin);
	printf("Enter second string: ");
	fgets(p2,sizeof(p2),stdin);
	strtok(p1,"\n");
	strtok(p2,"\n");
	cat(p1,p2);
	printf("New string: %s \n",p1);
}
