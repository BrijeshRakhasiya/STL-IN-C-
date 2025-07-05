#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> numbers;
    // numbers.push_back(0); // Add numbers 

    for(int i=0;i<=10;i++)
    {
        numbers.push_back(i);
    }

    auto it = numbers.begin();
      cout << *(it+5) << endl; // Ans --> 5 --> it start at 0 and add + 5 = 5 

    for(auto it = numbers.begin() ; it != numbers.end() ; it++) // Here auto --> mean that take numbers type 
    {
        cout << *it << endl;
    }

     for(int x : numbers) // For each loop --> here x is suppose one class in that classs add numbers classs students and print x class that is logic 
       cout << x << endl;

    //Important functionalities
	cout << "Size: " << numbers.size() << endl;
	cout << "Max size: " << numbers.max_size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;
	numbers.resize(5);
	cout << "Size after resizing: " << numbers.size() << endl;
	if (numbers.empty())
		cout << "Vector is empty" << endl;
	else
		cout << "Vector is not empty" << endl;
	cout << "Element[0] is: " << numbers[0] << endl;
	cout << "Element at(0) is: " << numbers.at(0) << endl;
	cout << "Front: " << numbers.front() << endl;  // starting position at element 
	cout << "Back: " << numbers.back() << endl;   // end position at element 



	//insert element at specific position in vector
    cout << "Inserting Element : " << endl; 
	numbers.insert(numbers.begin() + 2, 88); // Add Second position 88 
    for(int x : numbers)  
        cout << x << endl;

    cout << "Remove Inserting Element : " << endl; 
	//erase element from a specific position
	numbers.erase(numbers.begin() + 2);  // Remove Second position 
     for(int x : numbers)  
        cout << x << endl;

    cout << "Remove lat element of vector : " << endl;
	//remove last element of vector
	numbers.pop_back();
     for(int x : numbers)  
        cout << x << endl;

	//clear all the elements of vector
	numbers.clear();
	cout << "Size after clear: " << numbers.size() << endl;
	
    return 0;
}