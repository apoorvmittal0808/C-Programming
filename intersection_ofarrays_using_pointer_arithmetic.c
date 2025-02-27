#include <stdio.h>
#include<stdlib.h>
int main() {
    int a,b;
    printf("enter the number of elements in first array:\n");
    scanf("%d",&a);
    printf("enter the number of elements in second array:\n");
    scanf("%d",&b);
    int *arr1,*arr2;
    arr1=(int*)malloc(a*sizeof(int));
    arr2=(int*)malloc(b*sizeof(int));
    printf("enter the number in first array:\n");
    for(int i=0;i<a;i++){
        scanf("%d",arr1+i);
    }
    printf("enter the number in second array:\n");
    for(int i=0;i<b;i++){
        scanf("%d",arr2+i);
    }
    int *ptr1=arr1;
    int *ptr2=arr2;
    printf("First array is:\n");
    for(int i=0;i<a;i++){
        printf("%d ",*(arr1+i));
    }
    printf("\nSecond array is:\n");
    for(int i=0;i<b;i++){
        printf("%d ",*(arr2+i));
    }
    printf("\nIntersection of the arrays:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(*(arr1+i)==*(arr2+j)){
                int isprinted=0;
                for(int k=0;k<i;k++){
                    if(*(arr1+i)==*(arr1+k)){
                        isprinted=1;
                        break;
                    }
                }
                if(isprinted==0){
                printf("%d ",*(arr1+i));
                }
            } 
        }
    }
    free(arr1);
    free(arr2);
    return 0;
}
