// Finding Greatest Common Divisor
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two integers:\n");
    scanf("%d %d",&a,&b);
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    if(b==0){
        printf("GCD is: %d",a);
    }
    return 0;    
}
