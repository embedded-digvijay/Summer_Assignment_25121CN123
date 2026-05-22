#include<stdio.h>

int main(){
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 0; i <= 10 ; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    
    return 0;
}