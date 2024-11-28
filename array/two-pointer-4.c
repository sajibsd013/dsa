#include <stdio.h>
#include <stdlib.h>

// Two Sum II - Input Array Is Sorted
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0, right = numbersSize - 1, current_sum;
    
    int* result = (int*) malloc(2 * sizeof(int));
    if (!result) return NULL; 
    
    while (left < right) {
        current_sum = numbers[left] + numbers[right];
        if (current_sum == target) {
            result[0] = left+1;
            result[1] = right+1;
            *returnSize = 2; 
            return result;
        } else if (current_sum < target) {
            left++;
        } else {
            right--;
        }
    }
    
    *returnSize = 0; 
    free(result);    
    return NULL;
}

void print(int nums[], int numsSize)
{
    for (int i = 0; i < numsSize; i++)
        printf("%d ", nums[i]);
    printf("\n");
}

int main()
{
    int numbers[] = {2,7,11,15}, size, return_size=2, *returnSize = &return_size;
    size = sizeof(numbers) / sizeof(numbers[0]);
    // print(numbers, size);
    int* res = twoSum(numbers, size, 9, returnSize);
    if(return_size){
        printf("Found! at position %d & %d", res[0], res[1]);
    }else{
        printf("Not Found!");
    }

    // printf("%d %d",a,b);

}