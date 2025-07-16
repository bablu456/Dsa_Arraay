#include <stdio.h>
int main(){
    int arr[] = {2,1,5,1,3,2};
    int size = 6;
    int k = 3;
    int max_sum = 0;
    int window_sum = 0;
    for(int i=0;i<k;i++){
        window_sum += arr[i];

    }
    max_sum = window_sum;
    for(int i=k;i<size;i++){
        window_sum =window_sum + arr[i] - arr[i-k];
    }
    if(window_sum > max_sum){
        max_sum = window_sum;
    }
    printf("%d",max_sum);
    return 0;
}