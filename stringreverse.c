#include <stdio.h>
#include<string.h>
void reverseString(char str[]){
    int left=0;
    int right=strlen(str)-1;
    while(left<=right){
        char temp=str[left];
        str[left]=str[right];
        str[right]=temp;
        left++;
        right--;
    }
}
int main() {
    char str[100];
    printf("Enter the string:\n");
    scanf("%s",str);
    reverseString(str);
    printf("Reversed String is: %s\n",str);
    return 0;
}
