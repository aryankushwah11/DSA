#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Node* getNode(int val) {
    Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = val;
    p->next = NULL;
    return p;
}

Node* insEnd(Node* start, int val) {
    Node* temp = getNode(val);
    if (start == NULL) {
        temp->next = temp;
        return temp;
    }
    Node* p = start;
    while (p->next != start) p = p->next;
    p->next = temp;
    temp->next = start;
    return start;
}

void traverse(Node* start) {
    if (start == NULL) {
        cout << "List is empty\n";
        return;
    }
    Node* p = start;
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != start);
    cout << endl;
}

int main() {
    Node* start = NULL;
    start = insEnd(start, 10);
    start = insEnd(start, 20);
    start = insEnd(start, 30);
    start = insEnd(start, 40);
    
    traverse(start);
}