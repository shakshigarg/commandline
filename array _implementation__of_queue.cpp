//wap for array implementation of quque
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
int front=-1;
 int rear=-1;
 int a[max];
void insert(int item);
int peek();
int del();
void display();
int isfull();
int isempty();
int main()
{
   int a[max],choice,item,front,rear;

   while(1)
   {
   printf("1.insert\n");
   printf("2.delete\n");
   printf("3.display element at front\n");
   printf("4.display all elements\n");
   printf("5.quit\n");
   printf("enter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:
    printf("enter the element you wanna insert");
    scanf("%d",item);
    insert(item);
    printf("success");
    break;
   case 2:
    item=del();
    printf("deleted element is %d",item);
    break;
   case 3:
    printf("element at the front is %d",peek());
    break;
   case 4:
    display();
    break;
   case 5:
    exit(1);
   default:
    printf("wrong choice");
   }
   }getch();}
   void insert(int item)
   {if(rear==(max-1))
   {printf("queuq is full");
   return;
   }
   if(front==-1)
    front=0;
   rear=rear+1;
   a[rear]=item;
   }
    int del()
    {int item=0;
        if(isempty())
          {printf("queue is empty");
            exit(1);}
        else
            {item=a[front];
            front=front+1;
            }
            return item;
    }
    int peek()
    {if(isempty())
            {printf("queue is empty");
            exit(1);}

        return a[front];
    }
    void display()
    {int i;
       if(isempty())
            {printf("queue is empty");
            exit(1);}
        printf("queue is:");
        for(i=front;i<rear;i++)
            printf("%d",a[rear]);

    }
    int isfull()
    {
        if(rear==max-1)
            return 1;
        else
            return false;

    }
    int isempty()
    {
        if(front>rear||front==-1)
        return true;
        else
            return false;


    }








