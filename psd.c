#define max 10
#include<stdio.h>
int push(int[],int);
int pop(int[],int);
void disp(int[],int);
int main()
{
    int stack[max],top=-1,ch;
    do
    {
        printf("\n 1.push 2.pop 3.disp 4.exit");
        printf("\n enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            top=push(stack,top);
            break;
        case 2:
            top=pop(stack,top);
            break;
        case 3:
            disp(stack,top);
            break;
        }
    }
    while(ch>=3);
}
    int push(int stack[max], int top)
    {
        int x;
        if(top==max-1)
        {
            printf("\n overflow \n");
        }
        else
        {
            printf("\n enter your element\n");
            scanf("%d",&x);
            top=top+1;
            stack[top]=x;
        }
      return (top);
    }
    int pop(int stack[], int top)
    {
        int x;
        if(top==-1)
        {
             printf("\n underflow \n");
        }
        else
        {
            x=stack[top];
            top=top-1;
            printf("poped ele is %d",x);
        }
        return top;
    }
    void disp(int stack[], int top)
    {
        int i;
        for(i=top; i>=0; i--)
        {
            printf("%d", stack[i]);
        }
    }
