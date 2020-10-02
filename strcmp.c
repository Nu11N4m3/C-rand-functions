#include <stdio.h>

#define TRUE 1
#define FALSE 0

int strcmp(char* str1, char* str2){
    int count = 0;
    int flag = TRUE;

    while( str1[count] != '\0' || str2[count] != '\0'){
        if (str1[count] != str2[count]){
            flag = FALSE;
        }
        count++;
    }
    
    if (str1[count] != str2[count] ){
            flag = FALSE;
    }
    return flag;
}


int main(){
    char str1[] = "string";
    char str2[] = "string";

    int cmp = strcmp(str1, str2);

    printf("%d", cmp);
}