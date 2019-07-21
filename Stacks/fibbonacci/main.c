#include <stdio.h>
int fibbo(int n)
{
    if (n <= 1)
        return n;
    else
        return fibbo(n-1) + fibbo(n-2);
}
int main()
{
    int n;
    printf("Enter a number to find fibbonacci series:\n");
    scanf("%d",&n);
    printf("fibbonacci series is :\n");
    for (int i = 0 ; i < n ; i++)
    {
        printf("%d\n",fibbo(i));
    }
    return 0;
}
