#include <stdio.h>
int main(){
    int arr[] = {3,2,2,3};
    int size = 4;
    int target = 3;
    int left = 0;
    for(int right = 0;right<size;right++){
        if(arr[right]!=3){
           arr[left] = arr[right];
           left++; 
        }
    }
    for(int i=0;i<left;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}