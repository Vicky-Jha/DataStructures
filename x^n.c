//x^n;
#include <stdio.h>
int exponential(int x , int n)
{
    if (n == 1)
        return x;
    else
        return x*exponential(x,n-1);
}
int main()
{
    int x,n;
    printf("Enter the value of x and n\n");
    scanf("%d%d",&x,&n);
    printf("value of %d to the power of %d is = %d\n",x,n,exponential(x,n));
    return 0;
}
a
