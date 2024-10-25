#include<stdio.h>
int main(){
    FILE *ptr;
    ptr= fopen ("samplefile.txt","w");
    char a;
    fscanf(ptr,"%c",&a);
    printf("the char a is %c",a);
    fclose(ptr);
    return 0;
}