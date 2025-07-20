int longestOnes(int* nums, int numsSize, int k) {
    
    int start = 0,  end = 0;
    int len = 0, maxLen = 0, zeroCount = 0;
    while(end < numsSize){
        if(nums[end] == 0){
            zeroCount++;
            while(zeroCount>k){
                if(nums[start] == 0){
                    zeroCount--;
                }
                start++;
            }
        }
        end++;
        len = end - start ;
        if (maxLen < len) maxLen = len;
    }

    return maxLen;
}