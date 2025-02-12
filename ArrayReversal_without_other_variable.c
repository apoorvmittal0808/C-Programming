#include<stdio.h>
void arrayReversal(int arr[],int size){
        int start=0,end=size-1;
        while(start<=end){
            arr[start]=arr[start]^arr[end];
            arr[end]=arr[start]^arr[end];
            arr[start]=arr[start]^arr[end];
            start++;
            end--;
        }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
    printf("\n");
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Original Array: \n");
    printArray(arr,size);
    arrayReversal(arr,size);
    printf("Reversed Array: \n");
    printArray(arr,size);
}
