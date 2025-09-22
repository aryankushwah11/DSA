#include<iostream>
using namespace std;
int top=-1;
int x;
int n;
void push(int stack[], int n, int x)
{
    if(top==n-1)
    cout<<"overflow"<<endl;
    else
    {
        stack[++top]=x;
    }
}
int pop(int stack[],int n)
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
        return -1;
    }
    else
    {
        x=stack[top];
        top--;
        
    }
    return x;
}
void display(int stack[],int n)
{
    for(int i=top;i>=0;i--)
    {
        cout<<stack[i]<<endl;
    }
}
int main()
{
    int choice;
    cout<<"Enter the size of stack"<<endl;
    cin>>n;
    int stack[n]; 
    do
    {
        cout<<"Enter 1.Push \n 2.Pop\n 3.Display \n "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Element to be inserted"<<endl;
            cin>>x;
            void push(int stack[],int n,int x);
            break;
        case 2:
            cout<<endl<<"Popped elements="<<pop(stack,n);
            break;
        case 3:
            display(stack,n);
            break;
        default: cout<<endl<< "You ave entered the wrong table ";
        }
   cout<<"Enter 4 digit to exit";
    }while (choice!=4);
    // break;
        
    }