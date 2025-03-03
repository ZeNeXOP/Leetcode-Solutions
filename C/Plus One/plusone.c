int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    digits[digitsSize-1] = digits[digitsSize-1] + 1;
    int i = digitsSize-1;
    while(i>= 0 && digits[i] == 10) {
        digits[i] = 0;
        if (i == 0){
            int* new = (int*)malloc((digitsSize+1)*sizeof(int));
            new[0] = 1;
            for (int j = 1; j <= digitsSize; j++){
                new[j] = 0;
            }
            *returnSize = digitsSize+1;
            return new;
        }
        
        digits[i-1] = digits[i-1] + 1;
        i--;
    }
    *returnSize = digitsSize;
    return digits;
}