
#include <iostream>
using namespace std;


struct stack {
    int MaxSize=0;
    int newMaxSize;
    int *a = new int[MaxSize];
private:int top=-1;
public:void ArrayMaxSize(){
    cout<<"Enter MaxSize Of Array:"<<endl;
    scanf("%d",&MaxSize);
    
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
    if(top==MaxSize-1){
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
public:void IsFullStack(){
    if(MaxSize==top+1){
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
    printf("MaxSize of the Stack is: %d\n",newMaxSize);
    printf("Current Size of the Stack is: %d\n",top+1);
}
public:void StackContent()
    {
        for (int i=0;i<=top;i++){
            cout<<a[i]<<endl;
        }
    }
public:void SetNewMaxSize(){
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
    
}
};

int main() {
    struct stack s1;
    printf("Enter 1 for IsEmptyStack\nEnter 2 for push\nEnter 3 for IsFullStack\nEnter 4 for pop\nEnter 5 for top\nEnter 6 for size\nEnter 7 for elements List\nEnter 8 to Set Array MAxSize\nEnter 9 to give New MaxSize\nEnter 10 to quit");
    int option;
    while(1){
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

