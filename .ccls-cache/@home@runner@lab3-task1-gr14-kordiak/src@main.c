/* main.c */
#include <stdio.h>
#include <string.h>
int calc(char c, char* string)
{
  int ans = 0;
  for (int i = 0; i < strlen(string); i++) 
  {
    if (string[i] == c) 
    {
      ans++;
    }
  }
  return ans;
}

void main (void)
{
	char *inputText = NULL;
  char *t = "exit";
  char a;
  int rez = 0;
  size_t inputSize;
  printf("Enter your letter: ");
  scanf("%c", &a);
  printf("Enter your sentences. If you want to quit print 'exit'.\n");
  while (1 == 1) {
      getline(&inputText, &inputSize, stdin);
      if (strcmp(inputText, t) == 10) break;
      rez += calc(a, inputText);
  }
  printf("Number of repeats letter %c is %d\n", a, rez);

}
