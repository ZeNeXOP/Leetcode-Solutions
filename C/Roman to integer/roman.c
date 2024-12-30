int romanToInt(char* s) {
    int i = 0;
    int current = 0;
    int prev = 0;
    int total = 0;
    for(i = strlen(s)-1; i >= 0; i--){
        switch(s[i]){
            case 'I': current = 1; break;
            case 'V': current = 5; break;
            case 'X': current = 10; break;
            case 'L': current = 50; break;
            case 'C': current = 100; break;
            case 'D': current = 500; break;
            case 'M': current = 1000; break;
            default: return -1;
        }
        if (current < prev){
            total = total-current;
        }
        else {
            total = total + current;
        }
        prev = current;
    }
    return total;
}