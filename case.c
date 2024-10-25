#include<stdio.h>
int main()
{
    int A;
    printf("enter a char :");
    scanf("%d",&A);
    switch (A)
    {
    case 1 :
        printf("YOUR NAME IS DHANUSH");
        /* code */
        break;
    case 2 :
        printf("your name is harsha");
        break;
    
    default:
        printf("enter a valid name ");
        break;
    }
    return 0;


}