// fibonacci series
#include<stdio.h>
void fibonacci(int size){
    int a=0,b=1;
    for(int i=0;i<size;i++){
        printf("%d ",a);
        int sum=a+b;
        a=b;
        b=sum;
    }
}
int main(){
    int size;
    printf("Enter the size of fibonacci series:\n");
    scanf("%d",&size);
    printf("The fibonacci series:\n");
    fibonacci(size);
}
