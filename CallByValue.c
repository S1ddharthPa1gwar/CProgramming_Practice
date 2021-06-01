#include<stdio.h>

int swap(int x,int y);

int main() {
int a=4,b=5;
printf("Value of a and b before swap is %d and %d\n", a,b);
swap(a,b);
printf("Value of a and b before swap is %d and %d\n", a,b);
return 0;
}

int swap(int x,int y){
x+=y;
y=x-y;
x-=y;
printf("a is %d \nb is %d\n",x,y);
}