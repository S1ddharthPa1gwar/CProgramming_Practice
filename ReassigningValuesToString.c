#include<stdio.h>

int main() {
char str[]="Siddharth Bhai";    //this cannot be reassigned.
char *fun="Siddharth Bhai";     //this can be reassigned.
fun ="Bhai Bhai";
printf("%s", fun);

return 0;
}