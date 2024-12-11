#include <stdio.h>
#define size 5  

int main() {
    int a[size]; 
    int i, j, temp; 

    printf("Enter the values of the unsorted list:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) { 
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted list:\n");
    for (i = 0; i < size; i++) {
        printf("%d\n", a[i]); 
    }
    return 0;
}