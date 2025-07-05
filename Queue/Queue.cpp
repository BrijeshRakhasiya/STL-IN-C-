#include<iostream>
#include<queue>
using namespace std;

void printQueue(queue<int> n){
    while(!n.empty()){
        cout << n.front() << " " ;
        n.pop();
    }
}
int main()
{
    queue<int> num;
    num.push(1);
    num.push(4);
    num.push(2);

    cout << "The Size of Queue is : " << num.size() << endl;
    cout << "The Element of queue is : " << num.front() << endl;
    cout << "The Last element of queue is : " << num.back() << endl;

   printQueue(num);
    return 0;
}