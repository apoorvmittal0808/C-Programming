//sum of digits
#include<stdio.h>
int Sum(int n){
    int digit,sum=0;
    while(n>0){
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    printf("Number:\n");
    scanf("%d",&n);
    int s=Sum(n);
    printf("Sum is:\n");
    printf("%d",s);
}
