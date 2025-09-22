#include <bits/stdc++.h>
using namespace std;

char st[100];
int top = -1;
void push(char x) {
    if (top == 99) {
        cout << "Overflow\n";
    } else {
        st[++top] = x;
    }
}


char pop() {
    if (top == -1) {
        return -1;
    } else {
        return st[top--];
    }
}
int priority(char x) {
    if (x == '(') return 0;
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    if (x == '^') return 3;
    return 0;
}

int main() {
    string exp;
    cout << "Enter expression: ";
    cin >> exp;

    string postfix = "";

    for (int i = 0; i < exp.length(); i++) {
        char ch = exp[i];

        if (isalnum(ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            push(ch);
        }
        else if (ch == ')') {
            while (top != -1 && st[top] != '(') {
                postfix += pop();
            }
            pop();
        }
        else {
            while (top != -1 && priority(st[top]) >= priority(ch)) {
                postfix += pop();
            }
            push(ch);
        }
    }
    while (top != -1) {
        postfix += pop();
    }

    cout << "Postfix Expression: " << postfix << endl;

    return 0;
}
