#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double power(int base,int expn){
    if(expn==0){
        return 1;
    }
    if(expn>0)
    return base*power(base,expn-1);
    else
    return 1.0/power(base,-expn);
}
int main(){
    int base,expn;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&expn);
    double powerof=power(base,expn);
    printf("The result of %d base and %d exponent is %.6f\n",base,expn,powerof);
    return 0;
}
