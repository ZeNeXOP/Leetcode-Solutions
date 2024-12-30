double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    
    int num3[nums1Size + nums2Size];
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < nums1Size && j < nums2Size){
        if (nums1[i] <= nums2[j]){
            num3[k] = nums1[i];
            i++;
        }
        else {
            num3[k] = nums2[j];
            j++;
        }
        k++;
    }

    while (i < nums1Size) {
        num3[k] = nums1[i];
        i++;
        k++;
    }
    while (j < nums2Size) {
        num3[k] = nums2[j];
        j++;
        k++;
    }

    int size = sizeof(num3) / sizeof(num3[0]);
    double result = 0;
    if(size%2 == 0){
        size = size-1;
        result = ((num3[(size/2)+1]+num3[size/2])/2.0);
        return result; 
    }

    else {
        size = size-1;
        result = (double) num3[size/2];
        return result;
    }
}