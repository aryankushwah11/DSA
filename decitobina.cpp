#include<iostream>
#define MAX=100;
using namespace std;
int top=-1;
int n;
int stack[];
void main(int stack[],int n,int x)
{
    if(top==n-1)
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        stack[++top]=x;
    }
}
int pop(int stack[],int n,int x)
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
        x=stack[top];
        top--;
    }
    return x;
}
int main()
{
    int rem,num,power=1,decimal=0,n=0;
    cout<<"enter number"<<endl;
    cin>>num;
    int stack[n];
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        decimal=decimal+rem*power;
        power=power*2;
        

    }
}