#include<stdio.h>

int main() {
int i=1,sum=0,num;
printf("Enter the number till you find the sum of : ");
scanf("%d",&num);
for(i;i<=10;i++){
    sum += (i*num);
    i++;
}
printf("The sum of first 10 elements of table of %d is %d",num, sum);
return 0;
}