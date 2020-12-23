
#include <iostream>
using namespace std;
int MaxSize = 0;
//int newMaxSize = 0;
int *a = new(nothrow) int[MaxSize];
struct stack {
private:int top=-1;
public:void ArrayMaxSize(){
    cout<<"Enter MaxSize:"<<endl;
    scanf("%d",&MaxSize);
    if (!a)
    {
        cout<<"Memory Allocation Failed:\n"<<endl;
    }
    delete [] a;
}
public:void IsEmptyStack(){
    if (top==-1)
        cout<<"Stack is empty"<<"\n";
    else
        cout<<"Stack is not Empty"<<endl;
}
public:void push (){
    if(MaxSize == 0) {
        cout<<"Set max size of array first"<<endl;
    }
    else
    {
        
        if(MaxSize != 0 && top==MaxSize-1){
            cout<<"StackOverflow"<<endl;
        }
        else{
            top++;
            printf("Enter a data:\n");
            scanf("%d",&a[top]);
            printf("Data %d inserted Successfully\n",a[top]);
            /* int flag=1;
             while(flag==1){
             if (  scanf("%d",&a[top]) >= 1 ||  scanf("%d",&a[top])<=0 ){
             flag = 0;
             printf("Data %d inserted Successfully\n",a[top]);
             }else{
             printf("Enter only Digits\n");
             getchar();
             }
             }*/
        }
    }
}
public:void IsFullStack(){
    if(MaxSize != 0 && MaxSize==top+1){
        cout<<"Stack is full"<<endl;
    }
    else{
        cout<<"Stack is not full"<<endl;
    }
    
}
    
public:void pop(){
    if(top==-1){
        
        printf("Stack is EMPTY , 1st Enter Data then Pop\n");
    }
    else{
        printf("Top Data %d Deleted Successfully\n",a[top]);
        top=top-1;
        printf("Last inserted element in the stack is : %d\n",a[top]);
    }
    
}
public:void Topp(){
    
    if(top!=-1)
        printf("Last Inserted Element in the stack is : %d\n",a[top]);
    else
        printf("NULL\n");
}
public:void size(){
    printf("MaxSize of the Stack is: %d\n",MaxSize);
    printf("Current Size of the Stack is: %d\n",top+1);
}
public:void StackContent()
    {
        if (top==-1)
            cout<<"Stack is empty"<<"\n";
        
        for (int i=0;i<=top;i++){
            cout<<a[i]<<endl;
        }
    }
    /*public:void SetNewMaxSize(){
     cout<<"Enter New MaxSize Of Array:"<<endl;
     
     
     scanf("%d",&newMaxSize);
     
     int *b = (int*)malloc(newMaxSize*sizeof(int));
     
     for(int i=0;i<MaxSize;i++) {
     b[i]=a[i];
     }
     
     delete[] a;
     a=b;
     
     cout<<"New MaxSize Of Array Successfully alloted:"<<endl;
     cerr<<"Remenber the elements entered before aren't deleted yet"<<endl;
     
     }*/
public:void SetNewMaxSize()
    {
        cout<<"Enter New MaxSize:"<<endl;
        scanf("%d",&MaxSize);
        if (!a)
        {
            cout<<"Memory Allocation Failed:\n"<<endl;
        }
        
        printf("New MaxSize %d is alloted Succefully\n",MaxSize);
        cerr<<"Remenber the elements entered before aren't deleted yet"<<endl;
    }
    
};

int main() {
    struct stack s1;
    int option;
    while(1){
        printf("Enter 1 for IsEmptyStack\nEnter 2 for push\nEnter 3 for IsFullStack\nEnter 4 for pop\nEnter 5 for top\nEnter 6 for size\nEnter 7 for elements List\nEnter 8 to Set MAxSize\nEnter 9 to give New MaxSize\nEnter 10 to quit\n");
        scanf("%d",&option);
        switch (option){
            case 1: s1.IsEmptyStack();
                break;
            case 2: s1.push();
                break;
            case 3:s1.IsFullStack();
                break;
            case 4:s1.pop();
                break;
            case 5:s1.Topp();
                break;
            case 6:s1.size();
                break;
            case 7:s1.StackContent();
                break;
            case 8:s1.ArrayMaxSize();
                break;
            case 9:s1.SetNewMaxSize();
                break;
            case 10:exit(1);
                break;
            default:cerr<<"Enter Valid Option\n";
                
        }
    }
    return 0;
}
//    delete [] a;
/*
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
 */
