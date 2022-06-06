#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data[30];
    struct node* next;
};
struct node* create_node(int n)
{
    struct node *head,*tail,*temp;
    head=NULL;
    tail=NULL;
    for(int i=0;i<n;i++)
    {
        if(head==NULL)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            printf("enter the data of the %dth node=",i+1);
            gets(temp->data);
            temp->next=NULL;
            head=temp;
            tail=temp;
        }
        else
        {
            temp=(struct node*)malloc(sizeof(struct node)); 
            printf("enter the data of the %dth node=",i+1);
            gets(temp->data);
            temp->next=NULL;
            tail->next=temp;
            tail=temp;
        }
    }
    return head;
}
void traversal_of_linked_list(struct node* p)
{
    while(p!=NULL)
    {
        printf("%s\n",p->data);
        p=p->next;
    }
}
struct node* reverse_linked_list(struct node* p)
{
    struct node *prev_node=NULL,*current_node=p,*next_node=p;
    while(next_node!=NULL)
    {
        next_node=current_node->next;
        current_node->next=prev_node;
        prev_node=current_node;
        current_node=next_node;
    }
    return prev_node;
}
struct node* insert_at_head(struct node *p,const char value[])
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    strcpy((ptr->data),value);
    ptr->next=p;
    return ptr;
}
struct node* insert_at_mid(struct node * p,int position,char value[])
{
    struct node* head,*ptr;
    int i=1;
    head=p;
    ptr=(struct node*)malloc(sizeof(struct node));
    strcpy(ptr->data,value);
    while(p!=NULL)
    {
        p=p->next;
        i++;
        if(i==position)
        {
            ptr->next=p->next;
            p->next=ptr;
        }
    }
    return head;
}
struct node* insert_at_end(struct node* p,char value[])
{
    struct node* head,*ptr;
    head=p;
    ptr=(struct node*)malloc(sizeof(struct node));
    strcpy(ptr->data,value);
    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node* delete_at_index(struct node* head,int index,int n)
{
    struct node *p,*q;
    int i=0;
    p=head;
    if(index==0)
    {
        head=head->next;
        free(p);
        return head;
    }
    else if(index>0&&index<n)
    {
        while(i!=index-1)
        {
            p=p->next;
            i++;
        }
        q=p->next;
        p->next=q->next;
        free(q);
        return head;
    }
    else
    {
        q=p->next;
        while(q->next!=NULL)
        {
            p=p->next;
            q=q->next;
        }
        p->next=q->next;
        free(q);
        return head;
    }
}
int isEmpty(struct node* top)
{
    if(top==NULL)
    return 1;
    else
    return 0;
}
int isFull(struct node* top)
{
    struct node* p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL)
    return 1;
    else
    return 0;
}
struct node* push(struct node* top,char value[])
{
    if(isFull(top))
    printf("Stack Overflow");
    else
    {
        struct node * p=(struct node*)malloc(sizeof(struct node));
        strcpy(p->data,value);
        p->next=top;
        top=p;
        return top;
    }
}
char* pop(struct node** top)
{
    if(isEmpty(*top))
    printf("Stack Underflow");
    else
    {
        struct node* p=(*top);
        (*top)=(*top)->next;
        static char val[30];
        strcpy(val,p->data);
        free(p);
        return val;
    }
}
struct node* sort_linked_list(struct node* p,int n)
{
    struct node *current_node,*head,*nxt_node,*t;
    char temp[30];
    t=p;
    for(int i=0;i<n;i++)
    {
        current_node=p;
        nxt_node=current_node->next;
        while(nxt_node!=NULL)
        {
            if(strcmp(current_node->data,nxt_node->data)>0)
            {
                strcpy(temp,current_node->data);
                strcpy(current_node->data,nxt_node->data);
                strcpy(nxt_node->data,temp);
            }
            current_node=current_node->next;
            nxt_node=nxt_node->next;
        }

    }
    return t;
}
int main()
{
    int n,index;
    char val[30];
    struct node* head;
    char  choice,value[30];
    int choice2;
    printf("enter the number of nodes in the linked list");
    scanf("%d",&n);
    fflush(stdin);
    head=create_node(n);
    struct node* top=head;
    printf("original linked list:-\n");
    traversal_of_linked_list(head);
    fflush(stdin);
    printf("\nenter the choice=");
    scanf("%c",&choice);
    fflush(stdin);
    switch(choice)
    {
        case 'a':
        printf("enter the 2ndary choice");
        scanf("%d",&choice2);
        switch(choice2)
        {
            case 1:
            printf("enter the data of node to be inserted");
            fflush(stdin);
            gets(value);
            head=insert_at_head(head,value);
            break;
            case 2:
            printf("enter the data of node to be inserted");
            fflush(stdin);
            gets(value);
            head=insert_at_mid(head,n/2,value);
            break;
            case 3:
            printf("enter the data of node to be inserted");
            fflush(stdin);
            gets(value);
            head=insert_at_head(head,value);
            break;
            default:
            printf("invalid choice");
            break;
        }
        traversal_of_linked_list(head);
        break;
        case 'b':
        printf("enter the index number you want to delete");
        scanf("%d",&index);
        head=delete_at_index(head,index,n);
        traversal_of_linked_list(head);
        break;
        case 'c':
        printf("enter the choice\n1.for pushing\n2.for poping\n");
        scanf("%d",&choice2);
        switch(choice2)
        {
            case 1:
            printf("enter the value to be pushed in  the linked list");
            gets(val);
            head=push(head,val);
            break;
            case 2:
            printf("the value that has been poped=%s\n",pop(&head));
            break;
            default:
            printf("invalid choice");
            break;
        }
        printf("the new linked list is:-\n");
        traversal_of_linked_list(head);
        break;
        case 'd':
        head=reverse_linked_list(head);
        traversal_of_linked_list(head);
        break;
        case 'e':
        head=sort_linked_list(head,n);
        traversal_of_linked_list(head);
        break;
        case 'f':
        
        default:
        printf("invalid choices");
        break;
    }
    return 0;
}