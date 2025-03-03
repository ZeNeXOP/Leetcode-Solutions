#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 200002

bool isPalindrome(char* s) {
    if (*s == '\0'){
        return true;
    }

    int i = 0, j = strlen(s)-1;
    while(i < j){
        while(i<j && !isalnum(s[i])) i++;
        while(i<j && !isalnum(s[j])) j--;

        if (tolower(s[i]) != tolower(s[j])){
            return false;
        }
        i++;
        j--;
    }
    return true;
}