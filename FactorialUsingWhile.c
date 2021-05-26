#include<stdio.h>

int main() {
int num,fact=1,num1;
printf("Enter the number you find the factorial of : ");
scanf("%d",&num);
num1=num;
while(num!=0){
    fact *= num;
    num--;
}
printf("The factorial of %d is %d\n",num1,fact);

return 0;
}