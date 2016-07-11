#include <stdio.h>

int main(){

  char word[100] = "HELLOHH"; //THIS IS THE WORD THAT WILL BE REVERSED
  char *Start = word - 1;
  char *End = Start + strlen(word);
  int i;
  for (i=0; *Start!=*End; i++) {
  	printf("%c",*End);
  	End--;
  }
  printf("\n");



  return 0;
}
