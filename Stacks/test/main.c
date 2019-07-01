#include <stdio.h>
int main()
{
    int i,*even,*p , a=10;
    for (i=0;i<=5;i++)
    {
        scanf("%d",&even[i]);
    }
    for (i=0;i<=5;i++)
    {
        printf("%d\n",even[i]);
    }

    return 0;
}
#include <iostream>
#include<string>
#include<unordered_set>
#include<iomanip>

using namespace std;


struct Stack {
private: int maxSize = -1;
private: int *array;
private: int lastElementLocation = -1;
    
public: bool setMaxSize(int size) {
    if(maxSize == -1) {
        maxSize = size;
        return true;
    }
    
    return false;
}
    
public: bool isEmpty() {
    if(lastElementLocation == -1) {
        return true;
    }
    return false;
}
    
public: bool push(int element) {
    if(maxSize == -1) {
        cout<<"pls set max size first"<<endl;
        return false;
    }
    
    if(array==NULL) {
        array = (int*)malloc(maxSize * sizeof(int));
    }
    
    if(!isFull()) {
        lastElementLocation++;
        array[lastElementLocation] = element;
        return true;
    }
    
    printf("stack full");
    return false;
}
    
public: int top() {
    if(lastElementLocation != -1) {
        return array[lastElementLocation];
    }
    printf("stack empty");
    return -1;
}
    
public: int pop() {
    if(lastElementLocation != -1) {
        return array[lastElementLocation--];
    }
    printf("stack empty");
    return -1;
}
    
public: bool isFull() {
    if(lastElementLocation == maxSize) {
        return true;
    }
    return false;
}
    
public: void printStackContent() {
    for(int i = 0 ; i < lastElementLocation + 1; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
};



int main() {
    
    struct Stack st;
    
    while(1) {
        printf("Enter 1 for push\nEnter 2 for pop\nEnter 3 for isEmpty\nEnter 4 for isFullCheck\nEnter 5 for top\nEnter 6 to change max size of stack\n");
        int option;
        scanf("%d",&option);
        switch (option) {
            case 1:
                int element;
                printf("Enter element\n");
                scanf("%d",&element);
                st.push(element);
                break;
                
            case 2:
                cout<<st.pop()<<endl;
                break;
                
            case 3:
                cout<<st.isEmpty()<<endl;
                break;
                
            case 4:
                cout<<st.isFull()<<endl;
                break;
                
            case 5:
                cout<<st.top()<<endl;
                break;
                
                //            case 6:
                //                int size;
                //                cout<<"Enter new max size"<<endl;
                //                cin>>size;
                //                st.changeStackMaxSize(size);
                
            default:
                st.printStackContent();
                break;
        }
        
    }
    
}
