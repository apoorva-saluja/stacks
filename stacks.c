# include <stdio.h>
int flag=0;
int top=-1;
int n=3;
int push(int n,int stack[n]);
void pop(int stack[]);
void display(int stack[]);
void main()
{
    int stack[3];
    while('1')
    {
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:push(n,stack);
               break;
        case 2:pop(stack);
               break;
        case 3:display(stack);
               flag=1;
               break;

        case 4: flag=1;
        default :printf("End of program\n ");
               break;
        }
        if (flag==1)
        {
            break;
        }
    }
}

int push(int n,int stack[n])
{
    int item;
    if(top==n-1)
    {
        printf("*************Overflow************* \n");
    }
    else
    {
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
}
void pop(int stack[])
{
    if(top==-1)
    {
        printf("**********Underflow************ \n\n");
    }
    else
    {
    top--;
    }
}
void display(int stack[])
{
    for(int i=top;i>=0;i--)
    {
        printf("%d \n",stack[i]);
    }
}
