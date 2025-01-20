/* Implements Merge sort to sort all elements in an array */

#include <stdio.h>

#define SUCCESS 0

void print_array(int arr[], int arr_size);
void merge_sort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);

int main()
{
    int arr[] = {-7, -18, 100, 15, 7, 6, 10};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, arr_size);
    merge_sort(arr, 0, arr_size-1);
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

void merge_sort(int arr[], int low, int high)
{
    int mid;
    if (low < high) {
        mid = (low + high)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

void merge(int arr[], int low, int mid, int high)
{
    int merge_arr[100];
    int i, j, k=0;
    for (i=low, j=mid+1; i<=mid && j<=high; k++)
    {
        if(arr[i] < arr[j]) {
            merge_arr[k] = arr[i];
            i++;
        } else {
            merge_arr[k] = arr[j];
            j++;
        }
    }
    while (i<=mid) {
        merge_arr[k] = arr[i];
        i++;
        k++;
    }
    while (j<=high) {
        merge_arr[k] = arr[j];
        j++;
        k++; 
    }
    for ( i=low, k=0; i <=high; i++,k++ ) {
        arr[i] = merge_arr[k];
    }
}