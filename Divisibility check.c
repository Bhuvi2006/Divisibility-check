#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&i);
    printf("Enter the number u want to check divisibility: ");
    scanf("%d",&n);
    if (i%n==0)
    {
        printf("The number %d is divisible by %d",i,n);
    }
    else
    {
        printf("not divisible ");
    }
}
