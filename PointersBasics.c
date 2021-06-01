#include<stdio.h>

int main() {
int i= 5;
int *j=&i;
int **k = &j;
printf("value of i is %d\n",i);
printf("value of i is %u\n",*j);
printf("value of i is %u\n",**k);
printf("value of j is %u\n",j);
printf("value of j is %u\n",*k);
printf("value of j is %u\n",**&k);

return 0;
}