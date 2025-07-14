#include <stdio.h>
int binary_search(int arr[],int target){
    int start = 0;
    int end = 4;
    int mid = 0;
    while(start<=end){
        mid = start + (end - start)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(target>arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        
    }
    return 0;

}
int main(){
    int arr[] ={1,2,3,4,5};
    int target = 4;
    int result = binary_search(arr,target);
    printf("The found on this index : - %d ",result);
    return 0;
}