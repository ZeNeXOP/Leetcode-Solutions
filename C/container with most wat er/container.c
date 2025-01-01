int maxArea(int* height, int heightSize) {
    int i = 0, j = heightSize-1;
    int max_vol = 0;
    int temp = 0;

    while (i < j){
        temp = (j - i) * (height[i] < height[j] ? height[i] : height[j]);
        if(temp > max_vol){
            max_vol = temp;
        }

        if (height[i] < height[j]){
            i++;
        }
        else{
            j--;
        }
    }

    return max_vol;
}