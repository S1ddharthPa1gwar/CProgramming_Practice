#include<stdio.h>

int main() {
int num,sum=0,i=0;
printf("Enter the number till you find the sum of : ");
scanf("%d",&num);
do{
    sum += i;
    i++;
}while(i<=num);
printf("the total sum of first %d numbers is %d\n", num,sum);

return 0;
}