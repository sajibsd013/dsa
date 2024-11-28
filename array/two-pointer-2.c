#include <stdio.h>

// Remove Element using two pointer 
int removeElement(int* nums, int numsSize, int val) {
    int size = -1;
    for(int i=0; i<numsSize; i++){
        if(nums[i]!=val)
            nums[++size] = nums[i];
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
    int nums[] = {1,2,1,3,2,4,1,1}, size;
    size = sizeof(nums) / sizeof(nums[0]);
    print(nums, size);
    size = removeElement(nums, size, 2);
    print(nums, size);

}