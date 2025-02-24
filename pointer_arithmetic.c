#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation Failed\n");
        return 1;
    }
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    int *ptr=arr;
    printf("\nElements of the array and their addresses\n");
    for(int i=0;i<n;i++){
        printf("Element %d: Value = %d, Address = %p\n",i,*ptr,(void*)ptr);
        ptr++;
    }
    free(arr);
}
