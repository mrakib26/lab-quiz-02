// Sum of an array

#include<stdio.h>
int main()
{
    int n, arr[100], sum = 0; 

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // printf("Enter the elements of the array:\n");
    for(int i=0; i<n; i++) {
        printf("Enter element no %d: ", i+1); 
        scanf("%d", &arr[i]); 
        sum = sum + arr[i]; 
        
    }

    printf("\nSum of the elements = %d\n\n", sum);
    return 0;
}