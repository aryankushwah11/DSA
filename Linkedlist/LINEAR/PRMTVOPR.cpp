#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};
void traverse(struct node* start) {
    struct node* ptr = start;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

struct node* getnode() {
    struct node *g;
    g=(struct node*)malloc(sizeof(struct node));
    g->next = NULL;
    return g;
}

struct node* insbeg(struct node* start, int x) {
    struct node *p = getnode();
    p->data = x;
    p->next = start;
    start = p;
    return start;
}

struct node* insend(struct node* start, int x) {
    struct node *p = getnode();
    p->data = x;
    p->next = NULL;
    if (start == NULL) {
        start = insbeg(start, x);
        return start;
    }
    struct node *ptr = start;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = p;
    return start;
}

struct node* insafter(struct node* start, int key, int x) {
    struct node *ptr = start;
    if (ptr == NULL) {
        start = insbeg(start, x);
        return start;
    }
    while (ptr != NULL && ptr->data != key) {
        ptr = ptr->next;
    }
    if (ptr != NULL) {
        struct node *q = getnode();
        q->data = x;
        q->next = ptr->next;
        ptr->next = q;
    }
    traverse(start);
    return start;
}

int main() {
    struct node* start = NULL;
    int choice, val, key, n;
    cout << "Enter number of elements for initial linked list: ";
    cin >> n;
    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        start = insend(start, val);
    }

        cout << "\nMenu:\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert after a node\n";
        cout << "4. Traverse list\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> val;
                start = insbeg(start, val);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> val;
                start = insend(start, val);
                break;
            case 3:
                cout << "Enter key after which to insert: ";
                cin >> key;
                cout << "Enter value to insert: ";
                cin >> val;
                start = insafter(start, key, val);
                break;
            case 4:
                cout << "Linked list: ";
                traverse(start);
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    
    return 0;
}
