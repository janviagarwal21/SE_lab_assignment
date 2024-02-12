#include <stdio.h> 

int main() {
    int arr1size = 5, arr2size = 5, result, i, j;
    int a[5] = { 1, 2, 3, 4, 5 };
 
    int b[5] = { 6, 7, 8, 9, 10 };
 
    result = arr1size + arr2size;
    int c[result];

    for (i = 0; i < arr1size; i++) {
        c[i] = a[i];
    }
 
    for (i = 0, j = arr1size; j < result && i < arr2size; i++, j++) {
        c[j] = b[i];
    }
 
    printf("Array Elements After Merging:\n");
    for (i = 0; i < result; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}
