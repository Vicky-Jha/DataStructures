//Linked List
//final
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertAtEnd(void);
void insertAtBegin(void);
int lengthOfNode(void);
void displayList(void);
void insertAtMiddle(void);
void deleteNodeByLocation(void);
void deleteFullList(void);
void NthNodeFromEnd(void);
void stackUsingLinkedList(void);
int main()
{
    int ch;
    while(1)
    {
        printf("Enter Your Choice:\n");
        printf("1 to Insert node at begining\n2 to insert at end\n3 to enter a node in the middle\n4 to count number of nodes in the list\n5 to display the nodes in the list\n6 to delete node by location \n7 to delete full list\n8 nth node from the end of the linked list\n9 to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertAtBegin();
                break;
            case 2:insertAtEnd();
                break;
            case 3:insertAtMiddle();
                break;
            case 4:lengthOfNode();
                printf("Number of nodes in the list is = %d\n",lengthOfNode());
                break;
            case 5:displayList();
                break;
            case 6:deleteNodeByLocation();
                break;
            case 7:deleteFullList();
                break;
            case 8:NthNodeFromEnd();
                break;
            case 9:exit(1);
                break;
            default:printf("Invalid Option, try again:\n");
        }
    }
}
void insertAtBegin()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data of the node:\n");
    scanf("%d",&temp -> data);
    temp -> next = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp -> next = head;
        head = temp;
    }
    printf("Data %d is successfully inserted in the beginning\n",temp->data);
}
void insertAtEnd()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data of the node:\n");
    scanf("%d",&temp -> data);
    temp -> next = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *p = head;
        while (p -> next != NULL)
        {
            p = p -> next;
        }
        p -> next = temp;
    }
    printf("Data %d is successfully inserted at the End\n",temp->data);
}
void insertAtMiddle()
{
    struct node *temp , *p;
    int loc , k = 1;
    
    printf("Enter the Location where you wish to enter node:\n");
    scanf("%d",&loc);
    
    if(loc > lengthOfNode())
    {
        printf("Location is Invalid\n");
        printf("Current length of List is = %d nodes\n",lengthOfNode());
    }
    else
    {
        p = head;
        while (loc > k)
        {
            p = p -> next;
            k++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter data of the node:\n");
        scanf("%d",&temp -> data);
        temp -> next = NULL;
        temp -> next = p -> next;
        p -> next = temp;
    }
    // printf("Data %d is successfully inserted after location %d \n",temp->data,loc);
}
int lengthOfNode()
{
    int count = 0;
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List is Empty:\n");
    }
    else
    {
        while (temp != NULL)
        {
            temp = temp -> next;
            count++;
        }
    }
    return count;
}
void displayList()
{
    struct node *temp = head;
    int length = lengthOfNode();
    if(temp == NULL){
        printf("List is Empty:\n\n");
    }
    else
    {
        while(length--)
        {
            printf("%d ",temp -> data);
            temp = temp -> next;
        }
        printf("\n\n");
    }
    
}
void deleteNodeByLocation()
{
    int loc;
    if (head == NULL)
    {
        printf("List is Empty\n\n");
    }
    else
    {
        printf("Enter Location to delete the node\n");
        scanf("%d",&loc);
        if (loc > lengthOfNode())
        {
            printf("Location is Invalid\n");
            printf("Current length of List is = %d nodes\n",lengthOfNode());
        }
        else if (loc == 1)
        {
            struct node *temp = head;
            head = temp -> next;
            temp -> next = NULL;
            free(temp);
        }
        else
        {
            struct node *p , *q;
            p = head;
            int k=2;
            while (k < loc)
            {
                p = p -> next;
                k++;
            }
            q = p -> next;
            p -> next = q ->next;
            q -> next = NULL;
            free(q);
        }
    }
    printf("Node at location %d deleted successfully \n",loc);
}
void deleteFullList()
{
    if (head == NULL){
        printf("List is already Empty\n");
    }
    else
    {
        struct node *p , *i;
        i = head;
        while (i!=NULL)
        {
            p = i -> next;
            free(i);
            i = p;
            
        }
        printf("List Deleted successfully\n");
    }
}
void NthNodeFromEnd()
{
    struct node *temp = head;
    int n,i=1;
    printf("Enter location of node from the end of a linked list\n");
    scanf("%d",&n);
    while (i!=(lengthOfNode()-n+1))
    {
        temp = temp -> next;
        i++;
    }
    printf("nth node from the end of a linked list is = %d\n",temp -> data);
}
//
