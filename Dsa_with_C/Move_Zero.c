#include <stdio.h>
#include <string.h>
int main(){
    int arr[] = {0,1,0,3,12};
    int size = 5;
    int left = 0;
    for(int right = 0;right<size;right++){
        if(arr[right]!=0){
            int temp = arr[right];
            arr[right] = arr[left];
            arr[left] = temp;
            left++;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}