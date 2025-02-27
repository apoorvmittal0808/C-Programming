#include <stdio.h>
#include<stdlib.h>
int main() {
    int a,b;
    printf("Enter the number of elements in first array:\n");
    scanf("%d",&a);
    printf("Enter the number of elements in second array;\n");
    scanf("%d",&b);
    int *arr1,*arr2;
    arr1=(int*)malloc(a*sizeof(int));
    arr2=(int*)malloc(b*sizeof(int));
    printf("Enter the elements in first array:\n");
    for(int i=0;i<a;i++){
        scanf("%d",arr1+i);
    }
    printf("Enter the elements in second array:\n");
    for(int i=0;i<b;i++){
        scanf("%d",arr2+i);
    }
    printf("\nThe elements of first array:\n");
    for(int i=0;i<a;i++){
        printf("%d ",*(arr1+i));
    }
    printf("\nThe elements of second array:\n");
    for(int i=0;i<b;i++){
        printf("%d ",*(arr2+i));
    }
    int size=a+b;
    int *result;
    result=(int*)malloc(size*sizeof(int));
    for(int i=0;i<a;i++){
        *(result+i)=*(arr1+i);
    }
    for(int i=0;i<b;i++){
        *(result+a+i)=*(arr2+i);
    }
    printf("\nThe union of elements of both arrays:\n");
    for(int i=0;i<size;i++){
        int isduplicate=0;
        for(int j=0;j<i;j++){
            if(*(result+i)==*(result+j)){
                isduplicate=1;
                break;
                }
            }
            if(isduplicate==0) {
            printf("%d ", *(result+i));
        }
    }
    free(arr1);
    free(arr2);
    free(result);
    return 0;
}
