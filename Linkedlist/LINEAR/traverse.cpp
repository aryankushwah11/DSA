#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
}*A,*B,*C,*D;

int count = 0;
void traverse(node* head)//node ko likha call ke liye or * ye liya address ke liye
 {
    node* ptr = head;
    while (ptr != nullptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
        count++;
    }
    cout << endl;
    cout << "No of nodes: " << count << endl;
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

    cout << "Head node address: " << A << endl;
    traverse(A);
    delete A;
    delete B;
    delete C;
    delete D;

return 0;
}