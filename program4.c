"Write a menu-based program to perform following operations on singly linked list: 
a) To insert a node at the beginning of the list. b) To insert a node at the end of the list. c) To insert a node after a given node in the list. 
d) To delete the first node from the list. 
e) To delete the last node from the list. 
f) To delete a node after a given node from the list. 
g) To delete a node at a given position from the list."
#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int main()
{
        int choice;
        while(1){

                printf("\nMENU ");
                printf("\n 1.Create");
                printf("\n 2.Display ");
                printf("\n 3.Insert at the beginning");
                printf("\n 4.Insert at the end");
                printf("\n 5.Insert at specified position");
                printf("\n 6.Delete from beginning");
                printf("\n 7.Delete from the end");
                printf("\n 8.Delete from specific position");
                printf("\n 9.Exit");
                printf("\n default");
                printf("Enter your choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3:
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;

                        case 6:
                                        delete_begin();
                                        break;
                        case 7:
                                        delete_end();
                                        break;

                        case 8:
                                        delete_pos();
                                        break;


                        case 9:
                                        exit(0);
                                        break;

                        default:
                                        printf("\n Wrong Choice:");
                                        break;
                }
        }
        return 0;
}
void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("nOut of Memory Space:n");
                exit(0);
        }
        printf("\nEnter the data value ");
        scanf("\n%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}
void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("nList is empty:n");
                return;
        }
        else
        {
                ptr=start;
                printf("\n List elements");
                while(ptr!=NULL)
                {
                        printf("\n%d",ptr->info );
                        ptr=ptr->next ;
                }
        }
}
void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("n Memory Space:n");
                return;
        }
        printf("\n Enter the data " );
        scanf("%d",&temp->info);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\n Memory Space");
                return;
        }
        printf("\nEnter the data " );
        scanf("%d",&temp->info );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}
void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\n Memory Space:n");
                return;
        }
        printf("\nEnter the position ");
        scanf("%d",&pos);
        printf("\nEnter the data ");
        scanf("%d",&temp->info) ;

        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++) { ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\n position not found");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}

void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("nList is Empty:n");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nThe deleted element is :%d",ptr->info);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("nList is Empty:");
                exit(0);
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d",ptr->info);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("nThe deleted element is:%d",ptr->info);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("nThe List is Empty:n");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node deleted");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->next ;
                        printf("\nThe deleted element is:%d",ptr->info  );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("nPosition not Found:n");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("nThe deleted element is:%d",ptr->info );
                        free(ptr);
                }
        }
}
