#include<stdio.h>
int digitReverse(int n){
    int reversed=0;
    while(n>0){
        int digit=n%10;
        reversed=reversed*10+digit;
        n=n/10;
    }
    return reversed;
}
int main(){
    int n;
    printf("Original number:\n");
    scanf("%d",&n);
    int number=digitReverse(n);
    printf("Reversed number:\n");
    printf("%d",number);
    return 0;
}
