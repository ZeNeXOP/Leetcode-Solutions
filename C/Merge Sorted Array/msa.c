void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
    int t1 = m-1;
    int t2 = n-1;
    int k = m+n-1;
    int temp = 0;
    while(t2 >= 0 && t1 >= 0){
        if(nums1[t1] < nums2[t2]){
            nums1[k] = nums2[t2];
            k--;
            t2--; 
        }
        else{
            nums1[k] = nums1[t1];
            k--;
            t1--;
        }
    }
    while (t2 >= 0) {
        nums1[k--] = nums2[t2--];
    }
}