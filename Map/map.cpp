#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,string> Dictionary; // Here first string is key and second is value 
    // Map always print accending rder and unorede map  print manualy 

    Dictionary.insert(pair<string,string>("Apple","JK"));
    Dictionary.insert(pair<string,string>("Mango","Gujarat"));
    Dictionary.insert(pair<string,string>("Banna","Kerla"));
    Dictionary.insert(pair<string,string>("Guvava","Up"));

    Dictionary["Guvava"] = "Bihar" ; // change their value not key 

    Dictionary.clear();
    
    cout << "Size is : " << Dictionary.size() << endl;

    for(auto pair : Dictionary)
        cout << pair.first << " - " << pair.second << endl;
    return 0;
}