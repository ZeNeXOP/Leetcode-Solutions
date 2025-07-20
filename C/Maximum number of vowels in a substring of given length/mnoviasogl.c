#include <string.h>

bool vowelCheck(char p){
    if(p == 'a' || p == 'e' || p == 'i' || p == 'o' || p=='u') return true;
    else return false;
}


int maxVowels(char* s, int k) {
    int vowelCount = 0;
    int maxVowels = 0;
    int n = strlen(s);
    for (int i = 0; i<k; i++){
        if (vowelCheck(s[i])) vowelCount++;
    }
    maxVowels = vowelCount;

    for(int i=k; i<n; i++){
        if(vowelCheck(s[i])) vowelCount++;
        if(vowelCheck(s[i-k])) vowelCount--;
        if(vowelCount > maxVowels) maxVowels = vowelCount;
    }


    return maxVowels;
}