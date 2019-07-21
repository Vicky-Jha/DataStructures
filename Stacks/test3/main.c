//
//  main.c
//  test3
//
//  Created by test on 09/07/19.
//  Copyright © 2019 test. All rights reserved.
//

#include <stdio.h>
#include<stdbool.h>
bool isPowerOfTwo(int x)
{
    if(x == 0)
        return false;
    else
    {
        while(x % 2 == 0) x /= 2;
        return (x == 1);
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    isPowerOfTwo(x);
    return 0;
}
