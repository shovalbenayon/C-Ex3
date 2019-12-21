#include <stdio.h>
#include "isort.h"

int main() {
    int arr[arr_size] = {0};
    int *ptr = arr;
    printf("Enter 50 numbers: \n");
    for (int i = 0 ; i < arr_size ;i++){
        scanf("%d", (ptr++));
    }
    insertion_sort(arr, arr_size);
    print_array(arr, arr_size);
}
