#include<stdio.h>

int main() {
int num,i=10;
printf("Enter number : ");
scanf("%d",&num);
while(i){
    printf("%d\n", i*num);
    i--;
}

return 0;
}