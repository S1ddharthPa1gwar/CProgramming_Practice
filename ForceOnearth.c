#include<stdio.h>

float force(float mass);

int main() {
float m;
printf("Enter the mass of the body in kg : ");
scanf("%f", &m);
printf("The force exterted by the mass of %0.2f kg in Newtons is %0.2f. \n",m, force(m));

return 0;
}

float force(float mass){
    return mass*9.81;
}