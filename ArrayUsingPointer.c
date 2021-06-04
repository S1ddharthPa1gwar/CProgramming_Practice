#include<stdio.h>

int main() {
int marks[5];
int *ptr =&marks[0];
for(int i=0;i<5;i++){
    printf("Enter the marks for %d student ", i+1);
    scanf("%d", ptr);
    ptr++;
}
printf("\n");
for(int i=0;i<5;i++){
    printf("The marks for %d student is %d\n", i+1, marks[i]);
}

return 0;
}