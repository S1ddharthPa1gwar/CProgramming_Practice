#include<stdio.h>

void call();    //Function prototype

int main() {
printf("Hi this is main function\n");
call();         //function call
printf("This is again main function\n");

return 0;
}

void call(){        //function defination
    printf("you are in call function\n");
}