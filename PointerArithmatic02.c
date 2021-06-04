#include<stdio.h>

int main() {
float i=1;
float *ptr=&i;
printf("The value of ptr is %u.\n",ptr);
ptr++;  //float is 4B.
printf("The value of ptr is %u.\n",ptr);

return 0;
}