/* Implements selection sort to sort all elements in an array */

#include <stdio.h>

#define SUCCESS 0

void print_array(int arr[], int arr_size);
void selection_sort(int arr[], int arr_size);
void swap(int *elem1, int *elem2);

int main()
{
    int arr[] = {15, 12, 8, 7, 6, 0, -7, -18, 100};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, arr_size);
    selection_sort(arr, arr_size);
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

void selection_sort(int arr[], int arr_size)
{
    int min_index;
    for( int i=0; i<arr_size-1; i++) {
        min_index = i;
        for (int j=i+1; j<arr_size; j++) {
            if ( arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(&arr[i], &arr[min_index]);
    }
}

void swap(int *elem1, int *elem2)
{
    int tmp = *elem1;
    *elem1 = *elem2;
    *elem2 = tmp;
}