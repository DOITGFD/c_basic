#include<stdio.h>
int main(){
    FILE *ptr;
    ptr= fopen ("samplefile.txt","r");
    char a;
    fscanf(ptr,"%c",&a);
    printf("the char a is %c",a);
    return 0;
}