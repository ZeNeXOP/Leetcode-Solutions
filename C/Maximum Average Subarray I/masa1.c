double findMaxAverage(int* nums, int numsSize, int k) {
    
    double sum = 0; 
    double maxSum = 0;
    
    for (int i = 0; i<k; i++){
        sum = sum + nums[i];
        maxSum = sum;
    }

    for (int i = k; i < numsSize; i++){
        sum = (sum - nums[i-k]) + nums[i];
        if(sum > maxSum) maxSum = sum;  
    }

    double maxAverage = maxSum/k;
    return maxAverage;
}