#include<stdio.h>

int main() {
int table[10];
int num;
for(int i=1;i<11;i++){
num=5*i;
table[i-1]=num;
}
for(int i=0;i<10;i++){
    printf("%u : %d\n",&table[i],table[i]);
}
return 0;
}