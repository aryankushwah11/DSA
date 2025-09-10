#include<bits/stdc++.h>

int main() {
    std::vector<int> v;
    int n, value;

    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }

    std::cout << "Enter value to search: ";
    std::cin >> value;

    // Use bool to store result of binary_search
    bool found = std::binary_search(v.begin(), v.end(), value);

    if (found) {
        std::cout << "Element found in the vector." << std::endl;
    } else {
        std::cout << "Element not found in the vector." << std::endl;
    }

    return 0;
}
