#include<stdio.h>

int main() {
int num,sum=0;
printf("Enter the number till you find the sum of : ");
scanf("%d",&num);
for(int i=0;i<=num;i++){
    sum+=i;
}
printf("the total sum of first %d numbers is %d\n", num,sum);

return 0;
}