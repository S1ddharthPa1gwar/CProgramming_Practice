#include<stdio.h>

int main() {
int Arr[]={100,90,80,70,60,50,40,30,20,10};
int *ptr = Arr;
printf("%d :", ptr);
printf("%d\n", *ptr);
ptr +=2;
printf("%d :", ptr);
printf("%d\n", *ptr);
return 0;
}