#include <stdio.h>
int main(){
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elemnts in the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int s = size -1;
    int flag = 1;
    for(int i =0;i<size;i++){
        if(arr[i]!=arr[s-i]){
            flag = 0;
        }
    }
    if(flag){
        printf("Array is palindrome !!!");
    }else{
        printf("Array is not palindrome !!1");
    }
    return 0;
}