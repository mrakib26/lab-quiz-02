// Write a function that takes an array of integers and its size as parameters and returns the sum of the elements.

#include<stdio.h>
int sumOfArray (int arr[], int size) {
    if (size <= 0) {
        return 0; 
    } 
    else {
        return arr[size - 1] + sumOfArray(arr, size - 1); 
    }
}

int main()
{
    int arr[100], n, i; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i<n; i++) {
        scanf("%d", &arr[i]); 
    }
    printf("Sum of the elements = %d", sumOfArray(arr, n)); 
    return 0;
}