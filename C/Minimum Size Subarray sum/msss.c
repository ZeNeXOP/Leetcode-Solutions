int minSubArrayLen(int target, int* nums, int numsSize) {
    int start = 0;
    int minLen = numsSize + 1;
    int sum = 0;

    for (int end = 0; end <= numsSize-1; end++){
        sum += nums[end];
        while(sum>=target){
            int len = end - start + 1;
            if(len < minLen) minLen = len;
            sum -= nums[start++];
        }
        
    }

    return (minLen == numsSize + 1) ? 0  : minLen;
}