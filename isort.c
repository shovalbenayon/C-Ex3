#include "isort.h"
#include "stdio.h"

int arr [arr_size] = {0};

void shift_element (int* arr , int i){

    if (i == 0){
        return;
    }
    arr = arr + i;
    for (int n = 1; n <= i ; n++ ) {
        int *temp = arr;
        arr = arr - 1;
        *temp = *(arr);
    }
    *arr = 1;
}
void insertion_sort (int *arr, int len){

    for (int i = 1; i < len; ++i) {
        int temp = *(arr + i);
        int j ;
        for (j = i -1; j >= 0 && *(arr + j) > temp ; --j) {
            shift_element(arr+j , 1);
        }
        *(arr+j+1) = temp;
    }
}
void print_array(int *arr, int len){
    int i = 0;
    for(i = 0; i<len -1;i++) {
        printf("%d,", *(arr+i));

    }
    printf("%d", *(arr+i));
    printf("\n");
}

