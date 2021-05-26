#include<stdio.h>

int main() {
int num,fact=1;
printf("Enter the number you find the factorial of : ");
scanf("%d",&num);
for(int i=num;i>0;i--){
    fact *= i;
}
printf("The factorial of %d is %d\n",num,fact);

return 0;
}