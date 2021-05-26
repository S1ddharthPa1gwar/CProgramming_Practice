#include <stdio.h>

int main()
{
    int num, prime = 1,i=2;
    printf("Enter the number to check for prime or not : ");
    scanf("%d", &num);
while (i<num)
{
    prime=num%i;
    if (prime == 0)
     {
          printf("Given number is not a prime number.\n");
          break;
     }
     i++;
}
  if (prime == 1)
     {
          printf("Given number is prime number.\n");
     }

    return 0;
}