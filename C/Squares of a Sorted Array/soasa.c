int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));
    int left = 0, right = numsSize - 1;
    int pos = numsSize - 1;

    while (left <= right) {
        int leftsq = nums[left]*nums[left];
        int rightsq = nums[right]*nums[right];
        if (leftsq < rightsq){
            result[pos] = rightsq;
            pos--;
            right--;
        }
        else{
            result[pos] = leftsq;
            pos--;
            left++;
        }
    }

    return result;
}