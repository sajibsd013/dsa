#include <stdio.h>

// Maximum Average Subarray I
double findMaxAverage(int* nums, int numsSize, int k) {
    double max_avg, max_sum, current_sum = 0;
    for(int i=0;i<k;i++){
        current_sum +=  nums[i];
    }

    max_sum = current_sum;

    for(int i=1;i<=numsSize-k; i++){
        current_sum = current_sum-nums[i-1]+nums[i+k-1];
        if(current_sum>max_sum)
            max_sum = current_sum;
    }
    max_avg = max_sum/k;

    return max_avg;
}


int main()
{
    int nums[] = {1,12,-5,-6,50,3}, size;
    double res;
    size = sizeof(nums) / sizeof(nums[0]);
    res = findMaxAverage(nums, size, 4);
    printf("max avg: %lf \n", res);;

}