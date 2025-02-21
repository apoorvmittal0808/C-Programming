#include <stdio.h>
#include<stdlib.h>
int main() {
    int *arr;
    int n,i;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation failed\n");
        return 0;
    }
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements of array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    free(arr);
    arr=NULL;
    return 0;
}
