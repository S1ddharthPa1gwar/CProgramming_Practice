#include<stdio.h>

int main() {
int a=0;
printf("%d%d%d",a,++a,a++);

return 0;
}

//priority Order ==> a++ > ++a > a
// these are compiler dependent codes