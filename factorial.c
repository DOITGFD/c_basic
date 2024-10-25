#include<stdio.h>
int main(){
    int n;
    printf("enter a num/n:");
    scanf("%d",&n);
    //int i;
    int factorial=n*(n-1);
    for(int i=1;i<n;i++){
        factorial *=i;
        printf("the factorial of num is %d/n",factorial);
    }
    return 0;
}