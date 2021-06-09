#include<stdio.h>

int main() {
char Str[]="Siddharth";
char *ptr =Str;
for(int i=0;i<10;i++){
    printf("%c ",Str[i]);
}
printf("\n");
while(*ptr != '\0')
{
    printf("%c ",*ptr);
    ptr++;
}
return 0;
}