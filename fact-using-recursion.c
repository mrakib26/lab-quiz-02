// Write a function to calculate the factorial of a number using recursion.

#include<stdio.h>
int fact(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    }
    else {
        return n*fact(n-1); 
    }
}
int main() 
{
    int x; 
    printf("Enter a number to find its factorial: ");
    scanf("%d", &x); 

    printf("Factorial of %d is %d.\n", x, fact(x)); 
    return 0; 
}