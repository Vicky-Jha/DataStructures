//
//  main.cpp
//  bitManupalation
//
//  Created by test on 09/07/19.
//  Copyright © 2019 test. All rights reserved.
//

#include <iostream>
using namespace std;
bool isPowerOfTwo(int x)
{
    /*if (x == 0)
        return false;
    else
        return !(x&(x-1));
    */
    return (x && !(x & (x - 1)));

}
bool check (int N ,int i)
{
    if( N & (1 << (i)) )
        return true;
    else
        return false;
}

int count_one(int n)
{
    int count =0;
    while (n)
    {
        n= (n & (n-1));
        count++;
    }
    return count;
    /*int count = 0;
    if (n == 1)
    {
        return 1;
    }
    else
    {
    while (n!=1)
    {
    if (n%2 == 1)
        count ++;
        n = n/2;
    }
    return count+1;
    }*/
}
long largest_power(long num)
{
    //changing all right side bits to 1.
    num = num| (num>>1);
    num = num| (num>>2);
    num = num| (num>>4);
    num = num| (num>>8);
    
    
    //as now the number is 2 * x-1, where x is required answer, so adding 1 and dividing it by

    return (num+1)>>1;
    
}
int main()
{
    int x,n,N,i;
    long num;
    /*
    scanf("%d",&x);
    cout<<isPowerOfTwo(x)<<endl;
    scanf("%d",&n);
    cout<<count_one(n)<<endl;
     scanf("%d%d",&N,&i);
     cout<<check(N, i)<<endl;
    */
    while(1){
        scanf("%ld",&num);
        cout<<largest_power(num)<<endl;
    }
    return 0;
}
