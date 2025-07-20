#include <limits.h>
#include <stdbool.h>

bool sortCheck(int* nums, int numsSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            return false;
        }
    }
    return true;
}

int minimumPairRemoval(int* nums, int numsSize) {
    int num = 0;

    bool sorted = sortCheck(nums, numsSize);
    if(sorted){
        return 0;
    }
    while(!sortCheck(nums,numsSize)){
        int idx = 0;
        int sum = 0;
        int minSum = INT_MAX;
        int i = 0;
        while(i < numsSize-1){
            sum = nums[i] + nums[i+1];
            if (sum < minSum){
                idx = i;
                minSum = sum;
            }
            i++;
        }

        nums[idx] = minSum;

        for (int k = idx + 1; k < numsSize - 1; k++) {
            nums[k] = nums[k + 1];
        }
        numsSize--;
        num++;
    }
    return num;
}

