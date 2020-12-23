#include <stdio.h>
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n+sum(n-1);
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Sum of 1st %d natural number is = %d\n",n,sum(n));
    return 0;
}

