//
//  main.c
//  test2
//
//  Created by test on 08/07/19.
//  Copyright © 2019 test. All rights reserved.
//

#include <stdio.h>

int main() {
    // insert code here...
    int n, nReverse = n;
    int s = sizeof(n);
    scanf("%d",&n);
    for (; n ; n>>=1){
        nReverse <<= 1;
        nReverse |= n & 1;
        s--;
    }
    nReverse <<= s;
    printf("%d",nReverse);
    return 0;
}
