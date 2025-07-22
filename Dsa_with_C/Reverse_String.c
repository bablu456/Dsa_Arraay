#include <stdio.h>
#include <string.h>
int main(){
    int str[] = "icecream";
    int i = 0;
    int j = strlen(str)-1;
    int size = strlen(str);
    while(i<=j){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' && str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U' ){
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;j--;
        }
        if(str[i] != 'a' || str[i] != 'e' || str[i] != 'i' || str[i] != 'o' || str[i] != 'u' || str[i] != 'A' || str[i] != 'E' || str[i] != 'I' || str[i] != 'O' || str[i] != 'U'){
            i++;
        }

        if(str[j] != 'a' || str[j] != 'e' || str[j] != 'i' || str[j] != 'o' || str[j] != 'u' || str[j] != 'A' || str[j] != 'E' || str[j] != 'I' || str[j] != 'O' || str[j] != 'U'){
            j--;
    }
}
for(int k=0;k<size;k++){
    printf("%c ",str[k]);
}
    return 0;
}