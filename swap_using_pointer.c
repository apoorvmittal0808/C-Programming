#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    printf("Enter the First digit:\n");
    scanf("%d",&a);
    printf("Enter the Second digit:\n");
    scanf("%d",&b);
    printf("\nBefore Swap:\n");
    printf("a = %d\nb = %d\n",a,b);
    swap(&a,&b);
    printf("\nAfter Swap:\n");
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}
