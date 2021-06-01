#include<stdio.h>

int swap(int *x,int *y);

int main() {
int a=4,b=5;
printf("Value of a and b before swap is %d and %d\n", a,b);
swap(&a,&b);
printf("Value of a and b before swap is %d and %d\n", a,b);
return 0;
}

int swap(int *x,int *y){
int temp = *x;
*x=*y;
*y=temp;
printf("a is %d \nb is %d\n",*x,*y);
}