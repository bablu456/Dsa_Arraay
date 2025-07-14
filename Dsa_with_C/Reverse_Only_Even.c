#include <stdio.h>
int main(){
    int arr[] = {12,15,24,31,46,53};
    int i = 0;
    int j = 6;
    while(i<j){
        if(arr[i]%2==0 && arr[j-1]%2==0){
            int temp = arr[i];
            arr[i] = arr[j-1];
            arr[j-1] = temp;
            i++;
            j--;
        }
        // if(arr[i]%2==0 || arr[j-1]%2==0){
        //     int temp = arr[i];
        //     arr[i] = arr[j-1];
        //     arr[j-1] = temp;
        //     i++;
        //     j--;
        // }
        if(arr[i]%2!=0){
            i++;
        }
        if(arr[j-1]%2!=0){
                j--;
        }
    }
    for(int k=0;k<6;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}