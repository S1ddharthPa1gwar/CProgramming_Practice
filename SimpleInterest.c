#include<stdio.h>

int main() {
float amount,time,ROI;
printf("Enter Princliple amount : ");
scanf("%f", &amount);
printf("Enter period in years : ");
scanf("%f", &time);
printf("Enter Rate of Interest : ");
scanf("%f", &ROI);
printf("Your total interest on amount of %0.2f  is %0.2f", amount, (amount*time*ROI)/100);
return 0;
}