#include <stdio.h>

void decrypt(char *st);

int main()
{
char s[30];
printf("Enter string : ");
scanf("%s",s);
decrypt(s);
printf("decrypted string is %s",s);

    return 0;
}

void decrypt(char *st){
  char *ptr = st;
  while(*ptr != '\0'){
      *ptr = *ptr-1;
      ptr++;

  }  
}