# Data Structures and Algorithms (DSA) : Array

---

## **What is an Array?**
An **array** is a collection of elements, all of the same type, stored in contiguous memory locations. Arrays provide a way to store multiple values in a single variable.

### Key Characteristics:
1. **Fixed size**: The size of an array is defined at the time of declaration.
2. **Indexed**: Elements are accessed using an index starting from 0.
3. **Efficient access**: Direct access to elements using the index.

---

## **Operations on Arrays**
1. **Traversal**: Accessing each element of the array.
2. **Insertion**: Adding an element at a specific position.
3. **Deletion**: Removing an element.
4. **Searching**: Finding the position of an element.
5. **Updating**: Changing the value of an element.

---

## **Advantages and Disadvantages**
### Advantages:
- Fast access via indexing (O(1)).
- Simple to implement and use.

### Disadvantages:
- Fixed size (inflexible).
- Costly insertion and deletion (O(n) in worst case).

---

## **Examples in C Programming**

### 1. **Declaration and Initialization**
```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Declaring and initializing
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }
    return 0;
}
```

### 2. **Insertion**
```c
#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 40, 50};
    int n = 5, pos = 2, newValue = 25;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1]; // Shifting elements
    }
    arr[pos] = newValue; // Inserting new value
    n++; // Increasing size

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

### 3. **Deletion**
```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5, pos = 2;

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // Shifting elements
    }
    n--; // Reducing size

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

### 4. **Searching**
```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5, searchValue = 30, found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            printf("Element %d found at index %d\n", searchValue, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", searchValue);
    }
    return 0;
}
```

---

## **Practice Problems**
1. Write a program to reverse an array.
2. Find the maximum and minimum elements in an array.
3. Merge two sorted arrays.
4. Rotate an array `k` times.

---
__*Happy learning*__