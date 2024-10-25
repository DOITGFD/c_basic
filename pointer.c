#include<stdio.h>
int main(){
    int*ptr,k=10;
    ptr=&k;
    printf("%d",k);
    printf("%d",&k);
    printf("%d",ptr);
    printf("%d",&ptr);
    printf("%d",*ptr);
    return 0;
}