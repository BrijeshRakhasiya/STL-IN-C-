#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> dailyshedual;

    dailyshedual.push("Wake up 7 am");
    dailyshedual.push("Freash and eat Breack fat at most 8:30 am");
    dailyshedual.push("Go to Clg at 8:45 ");
    dailyshedual.push("coming out from clg at 4 pm");
    dailyshedual.push("Daily Learning New Skill for 1 hour");
    dailyshedual.push("Dinner Time is 7:30 pm");
    dailyshedual.push("Sleeping at 11:00 pm");
    
    cout << "*******************Daily Shedual ***************" << endl;
    while(!dailyshedual.empty()){
        cout << dailyshedual.front() << endl;
        dailyshedual.pop();
    }

    return 0;
}