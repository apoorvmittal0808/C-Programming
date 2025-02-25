#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation Failed");
        return 1;
    }
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    int *ptr=arr;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*ptr;
        ptr++;
    }
    printf("Sum of the elements of the array: %d\n",sum);
    free(arr);
    return 0;
}
