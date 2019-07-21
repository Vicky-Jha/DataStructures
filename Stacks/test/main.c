//if (root == NULL)
//{
//    root = temp ;
//}
//else
//{
//    struct node *store;
//    while(p)
//    {
//        store = p;
//        if (temp -> data > p -> data)
//        {
//            p = p -> right;
//        }
//        else
//        {
//            p = p -> left;
//        }
//    }
//    if (temp -> data > store -> data)
//    {
//        store -> right = temp;
//    }
//    else
//    {
//        store -> left = temp;
//    }
//}
//}
//
//#include <stdio.h>
//void get(int n)
//{
//    if(n<1) return;
//    get(n-1);
//    get(n-3);
//    printf("%d ",n);
//}
//
//int main()
//{
//    get(6);
//    return 0;
//}
//#include<stdio.h>
//int a[100];
//int array(int i)
//{
//    if(i = 9)
//    {
//        return a[9];
//    }
//    else
//    {
//        return a[i];
//    }
//}
//int main()
//{
//
//    for (int i=0 ; i<10 ; i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    printf("Array elements are:\n");
//    for (int i = 0; i<10 ; i++)
//    {
//        printf("%d",array(i));
//    }
//        return 0;
//}
//#include<stdio.h>
//void PrintArray(int arr[],int n)
//{
//    if(n<0)
//        return ;
//    PrintArray(arr,n-1);
//    printf("%d ",arr[n]);
//}
//int main()
//{
//    int arr[6],i;
//    printf("Enter array elements:\n");
//    for (i=0;i<6;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    printf("Array elements are:\n");
//    PrintArray(arr,5);
//    return 0;
//}
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,a[1000000];
    long temp;
    scanf("%d",&t);
    while(t--){
        long int n;
        int j=0,count=0;
        scanf("%ld",&n);
        if (n <= 1)
        {
            printf("%ld\n",n);
        }
        else
        {
            for (int i = 1;i<n;i++)
            {
                if (n % i == 0)
                {
                    a[j]=i;
                    j++;
                    count++;
                }
            }
            temp = a[0];
            int k=0;
            while (j>=0)
            {
                if (temp < a[k+1])
                {
                    temp = a[k+1];
                    k++;
                }
                j--;
            }
            if(count == 1)
                printf("%ld",n);
            else
                printf("%ld",temp);
            printf("\n");
        }
    }
    return 0;
}

//
//
//#include <math.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <limits.h>
//#include <stdbool.h>
//int main() {
//    long int N,max=2,T,factor;
//    scanf("%ld",&T);
//    while(T--) {
//        scanf("%ld",&N);
//
//        while(N%2==0)
//            N = N/2;
//
//        for ( factor = 3; factor <=N; factor+=2)
//        {
//            if(factor*2 > N)
//                factor = N;
//
//            while(N%factor == 0)
//            {
//                max = factor;
//                N = N/factor;
//            }
//        }
//        printf("%ld\n",max);
//    }
//    return 0;
//
//}
