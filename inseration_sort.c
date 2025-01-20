/* Implements insertion sort to sort all elements in an array */

#include <stdio.h>

#define SUCCESS 0

void print_array(int arr[], int arr_size);
void insertion_sort(int arr[], int arr_size);

int main()
{
    int arr[] = {0,6,-18, -7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, arr_size);
    insertion_sort(arr, arr_size);
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

void insertion_sort(int arr[], int arr_size)
{
    int temp;
    int j;
    for( int i=1; i<arr_size; i++) {
        if (arr[i] > arr[i-1]) {
            continue;
        }
        temp = arr[i];
        for( j=i-1; j >= 0; j--) {
            if (temp < arr[j]) {
                arr[j+1] = arr[j];
            } else {
                break;
            }
        }
        arr[++j] = temp;
    }
}
