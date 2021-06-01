#include<stdio.h>

void fun(int x);

int main() {
int i=6;
printf("The address of i is %u \n",&i);
printf("The value of i is %d \n",i);
fun(i);

return 0;
}

void fun(int x){
printf("The address of i is %u \n",&x);
}