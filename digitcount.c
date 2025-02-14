// count digits in a number
#include<stdio.h>
void counter(int n){
    int digit,count=0;
    while(n>0){
        count++;
        digit=n%10;
        n/=10;
    }
    printf("%d",count);
}
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Number of digits in the number:\n");
    counter(n);
}
