#include<stdio.h>

int main() {
int table[10];
int num,number;
printf("Enter the number you want table of : ");
scanf("%d", &number);
for(int i=1;i<11;i++){
num=number*i;
table[i-1]=num;
}
for(int i=0;i<10;i++){
    printf("%u : %d\n",&table[i],table[i]);
}
return 0;
}