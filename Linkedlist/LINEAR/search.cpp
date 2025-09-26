#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
    
}*A,*B,*C,*D;
int ele;
int search(node* start){
    node* PTR = start;
    int flag = 0 , count = 0 , element;
    cout << "Enter element to be searched : ";
    cin >> element;
    while(PTR!=NULL)
    {
        count++;
        if(PTR->data==element)
        {
            cout << "Element found at node " << count << endl;
            flag = 1;
            break;
        }
        PTR = PTR->next;
    }
    if(flag==0)
    {
        cout << "Element not found";
    }
    return 0;
}
int main() {

    A = (struct node*)malloc(sizeof(struct node));
    B = (struct node*)malloc(sizeof(struct node));
    C = (struct node*)malloc(sizeof(struct node));
    D = (struct node*)malloc(sizeof(struct node));

    cout << "Enter data for node 1: ";
    cin >> A->data;
    A->next = B;
    cout << "Enter data for node 2: ";
    cin >> B->data;
    B->next = C;
    cout << "Enter data for node 3: ";
    cin >> C->data;
    C->next = D;
    cout << "Enter data for node 4: ";
    cin >> D->data;
    D->next = nullptr;
    search(A);
    return 0;
}

