#include<stdio.h>

int main() {
// Naive way
// int marks1,marks2,marks3,marks4;
// marks1=34;
// marks2=57;
// marks3=65;
// marks4=24;
int marks[4];   //Allocate space for 4
marks[0]=34;
marks[1]=57;
marks[2]=65;
marks[3]=24;
printf("%d\n",marks[0]);

return 0;
}