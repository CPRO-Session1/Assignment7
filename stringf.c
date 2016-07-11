#include <stdio.h>

int strcmp(char *a, char *b){
  if(*a > *b){
    return 1;
  } else {
    if (*a < *b){
      return -1;
    } else {
      a++;
      b++;
      return strcmp(a, b);
    }
  }
}

char *strcat(char *a, char *b){
  char *answer[100];
  int i;

  for(i = 0; i < 100; i++){
    if(*a == '\0'){
      break;
    }
    answer[i] = *a;
    a++;
  }

  for (int j = i; i < 100; j++){
    if(*b == '\0'){
      break;
    }
    answer[j] = *b;
    b++;
  }

  return answer;
}

int main(){

  char s1[] = "Hello";
  char s2[] = "Hallo";

  printf("%s", strcat(s1,s2));

  return 0;
}
