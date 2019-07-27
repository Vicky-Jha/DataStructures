#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insertAtBeginning()
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    printf("Enter Node Data\n");
    scanf("%d",&temp -> data);
    temp -> next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp -> next = head;
        head = temp;
    }
    printf("Node data %d inserted successfully in the Beginning\n",temp -> data);
}
void insertAtEnd()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter Node Data\n");
    scanf("%d",&temp -> data);
    temp -> next = NULL;
    if (head == NULL)
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
    printf("Node %d INSERTED at the End successfully\n",temp -> data);
}
int lengthOfList()
{
    int count = 0;
    struct node *temp = head;
    while (temp != NULL)
    {
        temp = temp -> next;
        count++;
    }
    return count;
}
void LengthOFList()
{
    printf("Length of the List is %d\n",lengthOfList());

}
void insertAtMiddle()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node)) , *traverse = head;
    int loc;
    printf("Enter Node Loc:\n");
    scanf("%d",&loc);
    if (loc > lengthOfList())
    {
        printf("Location is Invalid\n");
        printf("Currently the list is having %d nodes \n",lengthOfList());
    }
    else
    {
        while (loc --)
        {
            traverse = traverse -> next;
        }
        printf("Enter Node Data\n");
        scanf("%d",&temp -> data);
        temp -> next = NULL;
        temp -> next = traverse -> next;//right
        traverse -> next = temp;//left
    }
}
void displayNode()
{
    int len = lengthOfList();
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
    printf("List Of Nodes :\n");
    while (len > 0)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
        len -=1;
    }
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter Your Choice\n");
        printf("1 to insert Node at Beginning\n2 to insert node at end\n3 to insert node in the middle\n4 to know length of list\n5 to display Nodes in the list\n6 to quit\n");
        scanf("%d",&ch);
    switch (ch) {
        case 1:
            insertAtBeginning();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAtMiddle();
            break;
        case 4:
            LengthOFList();
            break;
        case 5:
            displayNode();
            break;
        case 6:
            exit(1);
            break;
        default:printf("Invalid Option\n");
            break;
    }
    }
    return 0;
}
