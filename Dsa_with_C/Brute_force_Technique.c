#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isunique(char *s,int start,int end){
    bool seen[256] = {false};
    for(int i=start;i<=end;i++){
        unsigned char ch = s[i];
        if(seen[ch]){
            return false;
        }
        seen[ch] = true;
    }
    return false;
}

int LongestUniqueSubstring(char *s){
    int n = strlen(s);
    int maxlen = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(isunique(s,i,j)){
                int len = j - i + 1;
                if(len > maxlen){
                    maxlen = len;
                }
            }
        }
    }
    return maxlen;
}
int main(){

    return 0;
}