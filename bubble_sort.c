/* Implements bubble sort to sort all elements in an array */

#include <stdio.h>

#define SUCCESS 0

void print_array(int arr[], int arr_size);
void bubble_sort(int arr[], int arr_size);
void swap(int *elem1, int *elem2);

int main()
{
    int arr[] = {15, 12, 8, 7, 6, 0, -7, -18, 100};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, arr_size);
    bubble_sort(arr, arr_size);
    print_array(arr, arr_size);
    return SUCCESS;
}

void print_array(int arr[], int arr_size)
{
    for ( int i=0; i<arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[], int arr_size)
{
    for( int i=0; i<arr_size-1; i++) {
        for ( int j=0; j<arr_size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void swap(int *elem1, int *elem2)
{
    int tmp = *elem1;
    *elem1 = *elem2;
    *elem2 = tmp;
}