#include<stdio.h>

int main() {
int num1,num2,num3,num4;
printf("enter 4 numbers : \n");
scanf("%d%d%d%d", &num1, &num2, &num3,&num4);
(num1>num2 && num1>num3 && num1>num4)? printf("%d\n", num1):(num2>num3 && num2>num4)?printf("%d\n", num2):(num3>num4)?printf("%d\n", num3):printf("%d\n", num4);
return 0;
}