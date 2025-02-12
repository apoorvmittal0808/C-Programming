#include <stdio.h>
void merge(int arr1[],int size1,int arr2[],int size2,int merged[]){
    int i,j;
    for(i=0;i<size1;i++)
    merged[i]=arr1[i];
    for(j=0;j<size2;j++)
    merged[size1+j]=arr2[j];
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
    printf("\n");
}
int getArraySize(int arr[],int size1,int size2){
    int size=sizeof(arr)/sizeof(arr[0]);
    return size;
}
int main(){
    int arr1[]={2,3,5,6,7,1};
    int arr2[]={4,8,10,9,12,11};
    getArraySize(arr1,size1);
    getArraySize(arr1,size2);
    int merged[size1+size2];
    printf("First Array: \n");
    printArray(arr1,size1);
    printf("First Array: \n");
    printArray(arr2,size2);
    merge(arr1,size1,arr2,size2,merged);
    printf("Merged Array: \n");
    printArray(merged,size1+size2);
}
