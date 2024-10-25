#include<stdio.h>
int factorial(int );
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    //printf("tha value of  5 is %d/n:",factorial(5));
    printf("the factorial  of  number is %d/n:",factorial(n));
    return 0;
}
int factorial(int n){
    if(n==1||n==0){
    return 1;
    }
    else{
    return n*factorial(n-1);
    }
}

