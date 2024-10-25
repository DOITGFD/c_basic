#include<stdio.h>
int main(){
    int num;
    printf("enter a num:");
    scanf("%d",&num);
    int arr[num];
 
    int sum=0;
    //int i=0;
    //printf("enter a num:/n");
    //scanf("%d",&num);
    printf("enter the elements :");
    //scanf ("%d",&arr[i]);
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }
    printf("the sum of elements:%d\n",sum);

    int average=sum/num;
    printf("the average of the array:%d",average);
    
    return 0;

}
