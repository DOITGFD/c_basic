#include<stdio.h>
int main()
{
    int num1,num2,choice;
    printf("enter num1 :");
    scanf("%d",&num1);
    printf("enter num2 :");
    scanf("%d",&num2);
    printf("enter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("sum=%d/n",num1+num2);
        break;
    case 2:
        printf("sum=%d/n",num1-num2);
        break;
    case 3:
        printf("mul=%d/n",num1*num2);
        break;
    default:
        printf("enter valid choice");
    }
    return 0;
}