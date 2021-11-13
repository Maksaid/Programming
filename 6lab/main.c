#include <stdio.h>
#include <malloc.h>


int main() {
    int arr[4] = {50, 40, 30, 20};
    int *arr_c = arr;
    for (int i = 0; i < 4; i++) {
        printf("%d ", *arr_c++);
    }
    printf("\n");

    int *arr_2 = (int *) malloc(4 * sizeof(int));
    arr_2[0] = 50;
    arr_2[1] = 40;
    arr_2[2] = 30;
    arr_2[3] = 20;
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr_2[i]);
    }
    free(arr_2);
}