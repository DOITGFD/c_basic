#include<stdio.h>
int main(){
    int age;
    int placecode;
    printf("enter your age :");
    scanf("%d",&age);
    printf("enter your placecode:");
    scanf("%d",&placecode);
    if(age>18){
        printf("you are able to drive");
    }
    else if (age==15){
        printf("you are a kid");
    }
    else{
        printf("go and drive the toy car");
    }
    return 0;
}