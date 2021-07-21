#include <stdio.h>

int main()
{
FILE *ptr;
int num1,num2,num3;
ptr = fopen("Generatedfile2.txt","r");
fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
fclose(ptr);
printf("%d\n",num1);
printf("%d\n",num2);
printf("%d\n",num3);

    return 0;
}