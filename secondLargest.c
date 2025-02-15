#include<stdio.h>
#include<limits.h>
void findsecondlargest(int arr[],int size){
    if(size<2){
        printf("Array must have at least two elements");
        return;
    }
    int largest=INT_MIN,secondlargest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    if(secondlargest==INT_MIN){
        printf("There is no second largest number\n");
    }
    else{
        printf("%d is the second largest number\n",secondlargest);
    }
}
int main(){
    int size;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    findsecondlargest(arr,size);
    return 0;
}
