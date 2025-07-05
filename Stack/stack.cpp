#include<iostream>
#include<stack>
using namespace std;

void printstackelements(stack<int> num){
     while(!num.empty()){
       cout << num.top() << endl;
       num.pop();
   }
}
int main()
{
    // empty size push pop top
    stack <int> numbers;

    numbers.push(1);
    numbers.push(3);
    numbers.push(5);
    numbers.push(8);

    cout << "The size of stack is : " << numbers.size() << endl;

    printstackelements(numbers);
    return 0;
}