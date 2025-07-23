#include <stdio.h>
int main(){
    int num[] = {4, 1, 2, 1, 2};
    int n = sizeof(num) / sizeof(num[0]);
    int result = 0;
    for(int i=0;i<n;i++){
        result ^= num[i];
    }
    printf("The Single Number Is : %d",result);
    return 0;
}