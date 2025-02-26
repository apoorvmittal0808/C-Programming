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
        printf("%d ",*ptr1);
        ptr1++;
    }
    printf("\nSecond array is:\n");
    for(int i=0;i<b;i++){
        printf("%d ",*ptr2);
        ptr2++;
    }
    ptr1=arr1;
    ptr2=arr2;
    int size=a+b;
    int *concat;
    concat=(int*)malloc(size*sizeof(int));
    int *ptrconcat=concat;
    for(int i=0;i<a;i++){
        *ptrconcat=*ptr1;
        ptrconcat++;
        ptr1++;
    }
    for(int i=0;i<b;i++){
        *ptrconcat=*ptr2;
        ptrconcat++;
        ptr2++;
    }
    ptrconcat=concat;
    printf("\nConcatenated array is:\n");
    for(int i=0;i<size;i++){
        printf("%d ",*ptrconcat);
        ptrconcat++;
    }
    free(arr1);
    free(arr2);
    free(concat);
    return 0;
}
