#include<iostream>
using namespace std;

template <typename T>

class Calculator {
public :
   T add(T a , T b)
   {
    return  a + b;
   }
    T subtract(T a , T b)
   {
    return  a - b;
   }
   T multiply(T a , T b)
   {
    return  a * b;
   }
   T divide(T a , T b)
   {
    if(b==0)
    {
        cout << "Error : 0 is not divie" <<endl;
        return 0;
    }
    return  a / b;
   }
};
int main()
{
   Calculator<int> intvalue;
   cout << intvalue.add(12,52) << endl;
   cout << intvalue.subtract(12,52) << endl;
   cout << intvalue.multiply(12,52) << endl;
   cout << intvalue.divide(12,24) << endl;

  cout << "*****************************************" << endl;
   Calculator<float> flvalue;
   cout << flvalue.add(1.22,52.22) << endl;
   cout << flvalue.subtract(1.22,52.22) << endl;
   cout << flvalue.multiply(1.22,52.22) << endl;
   cout << flvalue.divide(1.22,52.22) << endl;

    return 0;
}