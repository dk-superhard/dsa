/* Implements Quick sort to sort all elements in an array */

#include <stdio.h>

#define SUCCESS 0

void print_array(int arr[], int arr_size);
void quick_sort(int arr[], int low, int high);
void swap(int *elem1, int *elem2);

int main()
{
    int arr[] = {-7, -18, 100, 15, 7, 6, 10};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, arr_size);
    quick_sort(arr, 0, arr_size-1);
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

void quick_sort(int arr[], int low, int high)
{
    int partition_index;
    if (low < high) {
        partition_index = partition(arr, low, high);
        quick_sort(arr, low, partition_index-1);
        quick_sort(arr, partition_index+1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while( i<j && arr[j] > pivot)
        {
            j--;
        }
        while( i<j && arr[i] < pivot)
        {
            i++;
        }
        if ( i < j) {
           swap(&arr[i],&arr[j]);
        }
    }
    if (arr[j] <= pivot) {
        return j;
    } else {
        return j-1;
    }
}

void swap(int *elem1, int *elem2)
{
    int tmp = *elem1;
    *elem1 = *elem2;
    *elem2 = tmp;
}