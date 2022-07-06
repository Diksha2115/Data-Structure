. Write a menu-based program to implement linear queue operations: INSERTION, DELETION using linked list implementation of queue


#include<stdio.h>
#include<stdlib.h>

struct node
{
        int info;
        struct node *link;
}*front=NULL,*rear=NULL;

void insert(int item);
int del();
int main()
{
        int choice,item;
        while(1)
        {
                printf("\n1.Insert\n");
                printf("2.Delete\n");
                printf("3.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d", &choice);

                switch(choice)
                {
                case 1:
                        printf("\nInput the element for adding in queue : ");
                        scanf("%d",&item);
                        insert(item);
                        break;
                case 2:
                        printf("\nDeleted element is  %d\n",del());
                        break;

                case 3:
                        exit(1);
                default :
                        printf("\nWrong choice\n");
                }/*End of switch*/
        }/*End of while*/
}/*End of main()*/

void insert(int item)
{
        struct node *tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        if(tmp==NULL)
        {
                printf("\nMemory not available\n");
                return;
        }
        tmp->info = item;
        tmp->link=NULL;
        if(front==NULL)          /*If Queue is empty*/
                front=tmp;
        else
                rear->link=tmp;
        rear=tmp;
}/*End of insert()*/

int del()
{
        struct node *tmp;
        int item;
        if( isEmpty( ) )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        tmp=front;
        item=tmp->info;
        front=front->link;
        free(tmp);
        return item;
}/*End of del()*/
int isEmpty()
{
        if(front==NULL)
                return 1;
        else
                return 0;
}



