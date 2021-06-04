#include<stdio.h>

int main() {
int i=1;
int *ptr=&i;
printf("The value of ptr us %u.\n");
ptr++;
printf("The value of ptr us %u.\n");

return 0;
}