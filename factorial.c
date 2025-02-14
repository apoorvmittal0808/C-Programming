// factorial of a number
#include<stdio.h>
int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int answer=factorial(n);
    printf("The factorial is:\n");
    printf("%d",answer);
    return 0;
}
