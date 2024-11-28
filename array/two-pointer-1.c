#include <stdio.h>

// Remove Duplicates from Sorted Array using two pointer 
int removeDuplicates(int *nums, int numsSize)
{
    int x = nums[0], size = 0;

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] != x){
            ++size;
            nums[size] = x = nums[i];
        }
    }
    return size+1;
}

void print(int nums[], int numsSize)
{
    for (int i = 0; i < numsSize; i++)
        printf("%d ", nums[i]);
    printf("\n");
}

int main()
{
    int nums[] = {1, 2, 2, 2, 3, 4, 4, 5}, size;
    size = sizeof(nums) / sizeof(nums[0]);
    print(nums, size);
    size = removeDuplicates(nums, size);
    print(nums, size);

}