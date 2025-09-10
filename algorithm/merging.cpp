#include<bits/stdc++.h>
using namespace std;
int main() {
    int n1, n2;
    
    cout << "Enter size of first sorted array: ";
    cin >> n1;
    vector<int> v1(n1);
    cout << "Enter elements of first sorted array:\n";
    for (int i = 0; i < n1; i++) {
        cin >> v1[i];
    }
    cout << "Enter size of second sorted array: ";
    cin >> n2;
    vector<int> v2(n2);
    cout << "Enter elements of second sorted array:\n";
    for (int i = 0; i < n2; i++) {
        cin >> v2[i];
    }
    vector<int> v3(n1+n2);
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    for(int i=0;i<n1+n2;i++)
    {
        cout<<v3[i];
    }
}