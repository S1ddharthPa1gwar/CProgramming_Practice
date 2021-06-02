#include<stdio.h>

void SumAndAvg(float num1,float num2,float*sum,float*avg);

int main() {
float num1,num2,sum,avg;
printf("Enter two numbers : \n");
scanf("%f%f",&num1,&num2);

SumAndAvg(num1,num2,&sum,&avg);
printf("The sum of %.2f and %.2f is %.2f\n",num1,num2,sum);
printf("The average of %.2f and %.2f is %.2f\n",num1,num2,avg);



return 0;
}

void SumAndAvg(float num1,float num2,float*sum,float*avg){
    *sum= num1+num2;
    *avg= *sum/2;
}