#include<stdio.h>

int main() {
int i;
scanf("%d", &i);
do{                 //will execute atleast once
    printf("the value if i is %d\n", i);
    i++;
}while(i<100);

return 0;
}