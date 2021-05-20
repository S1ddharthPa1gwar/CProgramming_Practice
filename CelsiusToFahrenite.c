#include<stdio.h>

int main() {
float temp;
printf("Enter Temperature in Celsius : ");
scanf("%f", &temp);
temp=(temp*9/5)+32;
//temp=temp*(9/5)+32;
printf("Temperature is %f fahrenhite", temp);

return 0;
} 