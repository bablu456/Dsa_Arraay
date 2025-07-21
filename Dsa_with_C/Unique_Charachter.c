#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isunique(char *s,int start, int end){
    bool seen[256] = {false};

    for(int i=start;i<=end;i++){
        unsigned char ch = s[i];
        if(seen[ch]){
            return false;
        }
        seen[ch] = true;
    }
    return true;
}
int main(){
    char str[] = "abca";
    int i=0,j=2;
    if(isunique(str, i, j)){
        printf("Unique substring \n");
    }else{
        printf("Repeat found\n");
    }
    return 0;
}