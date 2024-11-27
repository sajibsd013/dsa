#include <stdio.h>
#define MAX_SIZE 10

int arr[MAX_SIZE] = {10, 20, 40, 50, 60, 80};
int size = 5;

void print(){
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insertion(int value, int pos){ 
    for (int i = size; i>=pos; --i){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = value;
    size++;
}

void deletion(int pos){
    for (int i = pos-1; i<size-1; ++i){
        arr[i] = arr[i+1];
    }
    size--;
}

void search(int value){
    int index = -1;
    for (int i = 0; i<size; ++i){
        if(arr[i]==value){
            index = i;
            break;
        }
    }
    if(index != -1){
        printf("%d Found at index %d \n", value, index);
    }else{
        printf("Not Found!\n");
    }
}

// note : Index = Position-1 
int main(){
    print();
    insertion(30, 3);
    print();
    deletion(4);
    print();
    search(20);
}