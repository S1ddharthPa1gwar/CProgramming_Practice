#include <stdio.h>

void Encrypt(char *st);

int main()
{
char s[30];
printf("Enter string : ");
scanf("%s",s);
Encrypt(s);
printf("Encrypted string is %s",s);

    return 0;
}

void Encrypt(char *st){
  char *ptr = st;
  while(*ptr != '\0'){
      *ptr = *ptr+1;
      ptr++;

  }  
}