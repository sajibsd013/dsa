#include <stdio.h>

void sortColors(int* nums, int numsSize) {
    int temp;
    for (int i = 0; i < numsSize-1; i++)
    {
        for (int j = 0; j < numsSize-i-1; j++)
        {
            if(nums[j]>nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1]=temp;

            }
        }
    }
}

void print(int nums[], int numsSize)
{
    for (int i = 0; i < numsSize; i++)
        printf("%d ", nums[i]);
    printf("\n");
}
int main(){
    int arr[] = {2,0,2,1,1,0,1}, size;
    size = sizeof(arr)/sizeof(arr[0]);
    print(arr, size);
    sortColors(arr, size);
    print(arr, size);

}