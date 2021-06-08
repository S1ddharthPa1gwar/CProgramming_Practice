#include <stdio.h>

int main()
{
    int Arr[3][10];
    Arr[0][0] = 2;
    Arr[1][0] = 7;
    Arr[2][0] = 9;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            Arr[i][j] = Arr[i][0] * (j+1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", Arr[i][j]);
        }
          printf("\n");
    }
  
return 0;
}