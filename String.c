/*If you have a user-input string that contains hyphens (-) scattered throughout, and you want to move all hyphens to the beginning while keeping the order of other characters unchanged, you can do this efficiently in.*/
#include<stdio.h>
#include<string.h>
void moveHyphen(char str[]){
    int length=strlen(str);
    int hyphens=0,index=0;
    char result[length+1];
    for(int i=0;i<length;i++){
        if(str[i]=='-')
        hyphens++;
        else
        result[index++]=str[i];
    }
    for(int j=0;j<hyphens;j++){
        str[j]='-';
    }
    for(int i=0;i<index;i++){
        str[i+hyphens]=result[i];
    }
    str[length]='\0';
}
void ascendingString(char str[],int length){
    int hyphens=0;
    while(str[hyphens]=='-'){
        hyphens++;
    }
    for(int i=hyphens;i<length-1;i++){
        for(int j=hyphens;j<length-1;j++){
            if(str[j]>str[j+1]){
                int temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
}
int main(){
    char str[100];
    printf("Enter the String:\n");
    scanf("%s",str);
    moveHyphen(str);
    printf("The New String is:\n");
    printf("%s\n",str);
    int length=strlen(str);
    ascendingString(str,length);
    printf("The New Ascending String is:\n");
    printf("%s\n",str);
}
