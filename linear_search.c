/* Implements linear search of an element in an array */

#include <stdio.h>

#define SUCCESS 0
#define NOT_FOUND -1

int linear_search(int arr[], int size, int target_element);

int main()
{
    int arr[] = {8, 7, 12, 15, 1};
    int pos = linear_search(arr, sizeof(arr)/sizeof(arr[0]), 1);
    if (pos >= 0) {
        printf("Element is present at pos %d\n", pos);
    } else {
        printf("Element not found\n");
    }
    pos = linear_search(arr, sizeof(arr)/sizeof(arr[0], 10));
    if (pos >= 0) {
        printf("Element is present at pos %d\n", pos);
    } else {
        printf("Element not found\n");
    }
    return SUCCESS;
}

int linear_search(int arr[], int size, int target_element)
{
    int i = 0;
    while(i < size) {
        if (arr[i] == target_element) {
            return i;
        }
        i++;
    }
    return NOT_FOUND;
}