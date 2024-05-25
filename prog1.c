#include<stdio.h>
int main()
{
    int x, d; 
    printf("Enter a digit ");
    scanf("%d", &x);
    d = x%10; 
    printf("The digit after deleting last digit is %d\n", d);
    return 0; 
}