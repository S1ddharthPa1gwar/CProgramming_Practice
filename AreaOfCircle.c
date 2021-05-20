#include <stdio.h>

int main()
{
    float radius, height = 0, area;
    const float pi = 3.142;
    printf("Enter radius of the circle : ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("Area of the circle is %f \n", area);

    printf("Enter height of the cylander : ");
    scanf("%f", &height);
    printf("The volume of the cylander is %f", area * height);
    return 0;
}