#include<stdio.h>
int checkPalindrome(int n){
    int digit,number=0;
    while(n>0){
        digit=n%10;
        number=number*10+digit;
        n/=10;
    }
    return number;
}    
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n<0){
        printf("%d cannot be a palindrome number.",n);
        return 0;
    }
    int result=checkPalindrome(n);
    if(result==n){
    printf("%d is a palindrome number.\n",n);
    }
    else{
    printf("%d is not a palindrome number.\n",n);
    }
    return 0;
}
