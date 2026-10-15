#include<stdio.h>
#define max 5
int a[max];
int top=-1;
void push()
{
    int val;
    if(top==max-1)
    {
        printf("Srack Overflow\n");
    }
    else
    {
        printf("Enter the value to be pushed\n");
        scanf("%d",&val);
        top++;
        a[top]=val;
        printf("%d is pushed\n",val);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d is popped\n",a[top]);
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The top element is %d\n",a[top]);

    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are: \n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
    }
}
int main()
{
    int choice;
    do{
        printf("Stack operations:\n");
        printf("1. Stack operation\n");
        printf("2.  Pop operation\n");
        printf("3. Peek operation\n");
        printf("4. Display operation\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5: printf("Exit\n");
                    exit(0);
            default:
                     printf("Invalid option\n");
        }
       }while(choice!=5);
        return 0;
}


        
    

    


    





    
          


 





