// Area and Perimeter of Rectangle
#include<stdio.h>
int main()
{
    float (length,width,area,perimeter);
    printf("Enter the Length : ");
    scanf("%f",&length);
    printf("Enter the Width : ");
    scanf("%f",&width);
    area = width*length;
    perimeter = 2*(length+width);
    printf("Area = %f  Perimeter = %f",area,perimeter);
    return 0;
}