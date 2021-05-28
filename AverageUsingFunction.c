#include<stdio.h>

double avg(double num1,double num2,double num3);

int main() {
    double num1,num2,num3;
printf("Enter the three numbers to find average of : \n");
scanf("%lf%lf%lf",&num1,&num2,&num3);
printf("The average of %f, %f ,%f is %f",num1,num2,num3, avg(num1,num2,num3));

return 0;
}

double avg(double num1,double num2,double num3){
    return (num1+num2+num3)/3;
}