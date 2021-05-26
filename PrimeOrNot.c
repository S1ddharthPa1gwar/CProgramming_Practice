#include <stdio.h>

int main()
{
     int num, prime = 0;
     printf("Enter the number to check for prime or not : ");
     scanf("%d", &num);
     for (int i = 2; i < num; i++)
     {
          if (num % i == 0)
          {
               prime = 1;
               break;
          }
     }
     if (prime == 0)
     {
          printf("Given number is prime number.\n");
     }
     else
     {
          printf("Given number is not prime number.\n");
     }
     return 0;
}