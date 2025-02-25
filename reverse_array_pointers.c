#include<stdio.h>
#include<stdlib.h>
void printArray(int *ptr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",*ptr);
        ptr++;
    }
    printf("\n");
}
void swap(int *left,int *right){
    while(left<right){
        int temp=*left;
        *left=*right;
        *right=temp;
        left++;
        right--;
    }
}
int main(){
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    int *ptr=arr;
    printf("The Original array:\n");
    printArray(ptr,n);
    ptr=arr;
    int *left=arr;
    int *right=arr+n-1;
    swap(left,right);
    printf("The Reversed array:\n");
    printArray(ptr,n);
    free(arr);
}
