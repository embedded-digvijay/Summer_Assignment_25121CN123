#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);

    printf("The sum of first %d natural numbers is %d", n, (n*(n+1))/2);
    return 0;
}