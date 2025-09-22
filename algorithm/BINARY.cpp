#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }

    cout << "Enter value to search: ";
    cin >> value;
    bool found =binary_search(v.begin(), v.end(), value);

    if (found) {
        cout << "Element found in the vector.";
    } else {
        cout << "Element not found in the vector.";
    }

    return 0;
}
