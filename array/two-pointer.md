The **Two Pointer Technique** is a powerful algorithmic approach commonly used to solve array or list problems efficiently. It involves using two pointers to traverse the data structure simultaneously, often from opposite ends or with one pointer lagging behind the other. This technique is especially useful for problems involving searching, sorting, or partitioning.

---

### When to Use the Two Pointer Technique
- **Sorted arrays or lists**: It often works well with sorted data because you can easily decide whether to move the pointers closer together or farther apart.
- **Finding pairs or triplets**: Problems like finding pairs with a given sum or triplets that satisfy certain conditions.
- **Partitioning problems**: Dividing an array into different segments based on conditions.
- **Sliding window problems**: Finding subarrays or ranges meeting specific criteria.

---

### Advantages of the Two Pointer Technique
- **Time efficiency:** Reduces time complexity, often from \(O(n^2)\) to \(O(n)\) or \(O(n \log n)\).
- **Space efficiency:** Usually works in-place with minimal extra space.

---

### Key Points to Remember
1. Ensure the data is sorted if the problem requires it.
2. Decide the movement of pointers based on the problem's constraints.
3. Carefully handle edge cases, like empty arrays or strings.

---


## **Examples in C Programming**

### 1. **Remove Duplicates from Sorted Array**
```c
int removeDuplicates(int *nums, int numsSize){
    int x = nums[0], size = 0;

    for (int i = 1; i < numsSize; i++){
        if (nums[i] != x){
            nums[++size] = x = nums[i];
        }
    }
    return size+1;
}
```

### 2. **Remove Element**
```c
int removeElement(int* nums, int numsSize, int val) {
    int size = -1;
    for(int i=0; i<numsSize; i++){
        if(nums[i]!=val)
            nums[++size] = nums[i];
    }
    return size+1;
    
}
```

### 3. **Valid Palindrome**
```c
bool isPalindrome(char* s) {
    int left = 0, right = strlen(s)-1;
    while(left<right){
         if(s[left]!=s[right]){
            return false;
        }
        right--;
        left++;
    }

    return true;
}

```

### 4. **Two Sum - Input Array Is Sorted**
```c
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
```

---


__*Happy learning*__