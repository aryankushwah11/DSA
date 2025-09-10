#include <iostream>
#include <vector>  
using namespace std;

int main() {
    vector<int> v;

    cout << "Size of vector 1: " << v.size() << endl;
    cout << "Capacity of vector 1: " << v.capacity() << endl;

    v.push_back(1);

    cout << "Size of vector 1: " << v.size() << endl;
    cout << "Capacity of vector 1: " << v.capacity() << endl;

    v.push_back(3);

    cout << "Size of vector 1: " << v.size() << endl;
    cout << "Capacity of vector 1: " << v.capacity() << endl;

    v.push_back(4);

    cout << "Size of vector 1: " << v.size() << endl;
    cout << "Capacity of vector 1: " << v.capacity() << endl;

    v.push_back(8);

    cout << "Size of vector 1: " << v.size() << endl;
    cout << "Capacity of vector 1: " << v.capacity() << endl;

    v.push_back(9);

    cout << "Size of vector 1: " << v.size() << endl;
    cout << "Capacity of vector 1: " << v.capacity() << endl;


    for(int i=0; i<v.size(); i++)
      cout<<v.at(i)<<" ";
      cout<<endl;

      for(auto value:v)
           cout<<value<<" ";
           cout<<endl;

           v.pop_back();
           for(auto value:v)
              cout<<value<<" ";

          cout<<endl;
          cout<<"Front:"<<v.front()<<" "<<"Last Value:"<<v.back()<<" ";
          cout<<endl;
          
          v.insert(v.begin(),2);
          for(auto value:v)
           cout<<value<<" ";
        cout<<endl;

        v.insert(v.begin()+3,3,11);
          for(auto value:v)
           cout<<value<<" ";
        cout<<endl;
        
        v.erase(v.begin());
        for(auto value:v)
           cout<<value<<" ";
        cout<<endl;

        vector<int>v1={2,5,7,8,9,10};
        for(auto value:v1)
           cout<<value<<" ";
        cout<<endl;

        vector<int>v2(3,5);
        for(auto value:v2)
           cout<<value<<" ";
        cout<<endl;


        vector<int>::iterator itr;
        for(auto itr=v.begin(); itr!=v.end(); itr++)

            cout<<*(itr)<<" ";
         cout<<endl;   
        

         

    






    return 0;
    
}