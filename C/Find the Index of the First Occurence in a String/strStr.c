#include <string.h>
#include <stdio.h>
//KMP algorithm
int strStr(char* haystack, char* needle) {
    //we will be doing pattern matching algorithm here, i remember KMP being optimal
    //for this
    int m = strlen(needle);
    int lps[m];
    int j = 0;
    int i = 1;
    lps[0] = 0;
    while (i<m){
        if (needle[i] == needle[j]){
            j += 1;
            lps[i] = j;
            i += 1;
        }
        else {
            if (j!=0){
                j = lps[j-1];
            }
            else {
                lps[i] = 0;
                i += 1;
            }
        }
    }

    int n = strlen(haystack);
    i = 0;
    j = 0;
    while (i < n){
        if (haystack[i] == needle[j]){
            i++;
            j++;
        }
        if (j == m){
            return i-j;
        }
        else if (haystack[i] != needle[j]){
            if ((i<n)&&(needle[j] != haystack[i])){
                if (j!=0){
                    j = lps[j-1];
                }
                else {
                    i++;
                }
            }
            else {
                i++;
            }
        }
    }
    return -1;
}