#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int *source;
    source=(int*)malloc(n*sizeof(int));
    int *destination;
    destination=(int*)malloc(n*sizeof(int));
    if(source==NULL || destination==NULL){
        printf("Memory Allocation Failed\n");
        return 1;
    }
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",source+i);
    }
    int *ptr=source;
    printf("The elements of the array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    int *ptr1=destination;
    for(int i=0;i<n;i++){
        *ptr1=*ptr;
        ptr1++;
        ptr++;
    }
    printf("\nThe elements of the Source Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(source+i));
    }
    printf("\nThe elements of the Copied Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(destination+i));
    }
    free(source);
    free(destination);
    return 0;
}
