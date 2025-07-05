// Match Making Systems --> PUBG , FF ;

#include<iostream>
#include<list>
using namespace std;

void displayrating(const list<int>& playesrating) { // here const mean all data original and thi fun only read that data
    for(list<int> :: const_iterator ite = playesrating.begin() ; ite != playesrating.end() ; ite++) {
        cout << "Player rating : " << *ite << endl;
      }
}

void insertPlayerIntoOrderdList(int newplayerrating,list<int>&playesByrating){             // Sorting the List 
    for(list<int> :: iterator ite = playesByrating.begin() ; ite != playesByrating.end() ; ite++) {
        if(*ite > newplayerrating){
            playesByrating.insert(ite,newplayerrating);
            return ;
        }
      }
      playesByrating.push_back(newplayerrating);
}
int main()
{
    list<int> allplayers = {2,3,5,9,8,7,4,6,2,5,8}; // All players rating in game 

    list<int> beginners ;  // rating 1-5
    list<int> pros ;      //  rating 6-10

    for(list<int> :: iterator ite = allplayers.begin() ; ite != allplayers.end() ; ite++) {
        int rating = *ite;
        if(rating>=2 && rating<=5)
            insertPlayerIntoOrderdList(rating,beginners);
        else if (rating>=6 && rating<=10)
            insertPlayerIntoOrderdList(rating,pros);
    }

    cout << "Beginer Player  " << endl;
    displayrating(beginners);
    cout << "pros player " << endl;
    displayrating(pros);

    return 0;
}

/* 
  List Advantangs :
  1) add and delete elements is fast
  List Disadvantages:
  1) serching the element 
*/