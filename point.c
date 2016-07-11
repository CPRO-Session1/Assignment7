//Anya Lauria
//Strcat and strcmp in functions 
//I first wrote the function for strcmp and the code executed correctly, but after strcat, it compiled but at 
//execution did not execute and said there is a segmentation fault 
#include <stdio.h>
#include <string.h> 


char stca(char *s1, char *s2){      

	char *s3 = s1;

	while (*s3 != '\0'){

		s3++;
	}

	while (*s2 != '\0'){
		
		*s3 = *s2;
		s3++;
		s2++;
	}

	s3++;
	*s3 = '\0';
	 
}


int stco(char *s3, char *s4){

        while(*s3 != '\0' && *s4 != '\0'){
		
		s3++;
		s4++;

	}
	if (*s3 == *s4){ 
		return 0;  
	}

	else if (*s3>*s4){
		return 1; 
	}

	else if (*s4>*s3){
		return -1; 
	}
       
	
	
}

int main(){

	char *s1 = "Lets"; 
	char *s2 = "Eat"; 
	char *s3 = "Right"; 
	char *s4 = "Now"; 

        

      stca(s1, s2); 
      stco(s3, s4); 

	printf("Printing the answer to strcat: %s\n", s1); 
	printf("Printing the answer to strcmp: %d\n", stco(s3, s4)); 

return 0; 


}

