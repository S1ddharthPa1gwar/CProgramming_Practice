#include<stdio.h>

int main() {
char i='a';
char *ptr=&i;
printf("The value of ptr is %u.\n",ptr);
ptr++;  //char is 1B.
printf("The value of ptr is %u.\n",ptr);

return 0;
}
