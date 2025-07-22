int lengthOfLongestSubstring(char* s) {
    int lastIndex[256];
    for (int i = 0; i < 256; i++) lastIndex[i] = -1;
    int start = 0, end = 0; 
    int maxLen = 0;
    for (end = 0; s[end] != '\0'; end++){
        if (lastIndex[(unsigned char) s[end]] >= start) start = lastIndex[(unsigned char) s[end]] + 1;
        lastIndex[(unsigned char) s[end]] = end;
        if(end - start + 1 > maxLen) maxLen = end - start + 1;
    } 

    return maxLen;   
}