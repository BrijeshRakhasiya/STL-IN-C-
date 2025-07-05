#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> Mylist;
    Mylist.push_back(20);   // 20 --> second
    Mylist.push_back(80);   // 80 --> Thired
    Mylist.push_front(10);  // 10--> first
    Mylist.erase(Mylist.begin());  // 10 --> Remove 
    Mylist.push_front(10);  // 10--> first

    list<int> :: iterator it;

    for(it = Mylist.begin() ; it != Mylist.end() ; it++ )
    {
        cout << *it << endl;
    }

    return 0;
}