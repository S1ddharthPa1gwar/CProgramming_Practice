#include<stdio.h>

double sum(double a,double b);

int main() {
double num1, num2,add;
printf("Enter two numbers to get their sum : \n");
scanf("%lf%lf",&num1,&num2);
add = sum(num1,num2);
printf("The sum of %lf and %lf is %lf\n",num1,num2,add);
return 0;
}

double sum(double a, double b){
     double sum= a+b;
     return sum;
    
}