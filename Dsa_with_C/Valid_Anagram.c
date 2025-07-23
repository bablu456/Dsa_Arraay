#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool angram(char str[],char str1[]){
    if(strlen(str) != strlen(str1)){
        printf("They are not a Anagram !! ");
        return false;
    }
    int freq[26] ={0};
    for(int i=0;i<strlen(str);i++){
        freq[str[i] - 'a']++;
        freq[str1[i]- 'a']--;

    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
    
}

int main(){
    char str[] = "listen";
    char str1[] = "silent";
    bool result = angram(str,str1);
    printf("%d",result);
    return 0;
}