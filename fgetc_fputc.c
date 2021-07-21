#include <stdio.h>

int main()
{
    FILE *ptr;
    //char c= fgetc(ptr);
    ptr = fopen("Generated.txt", "r");
    printf("the character is %c \n",fgetc(ptr));
    printf("the character is %c \n",fgetc(ptr));
    printf("the character is %c \n",fgetc(ptr));
    printf("the character is %c \n",fgetc(ptr));
    printf("the character is %c \n",fgetc(ptr));
    printf("the character is %c \n",fgetc(ptr));
    printf("the character is %c \n",fgetc(ptr));
    printf("the character is %c \n",fgetc(ptr));
    printf("the character is %c \n",fgetc(ptr));
    printf("the character is %c \n",fgetc(ptr));
    printf("the character is %c \n",fgetc(ptr));


    return 0;
}