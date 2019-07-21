#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter a number to find its factorial\n");
    scanf("%d",&n);
    printf("Factorial of a given number %d is = %d\n",n,fact(n));
    return 0;
}
int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n*fact(n-1);
}
