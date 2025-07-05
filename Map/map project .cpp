#include<iostream>
#include<map>
#include<string>
#include<list>
using namespace std;

int main()
{
    map<string, list<string>> pokedx ;

    list<string> PokemonAttacks  {"Thunderbolt" , "Anchor Shot" , "Baby-Doll Eyes" };
    list<string> charizardAttacks  {"Barb Barrage" , "Aura Wheel" , "Bite" };
    list<string> charmanderAttacks  {"Bouncy Bubble" , "Bullet Seed" , "Copycat" };
    

    pokedx.insert(pair<string,list<string>>("Pokemon", PokemonAttacks));
    pokedx.insert(pair<string,list<string>>("Charizard", charizardAttacks));
    pokedx.insert(pair<string,list<string>>("Charmander", charmanderAttacks));

    for(auto name : pokedx)
    {
        cout << name.first << " - ";
        for(auto attack : name.second)
        {
           cout << attack << " ,  ";
        }
        cout << endl;
    }
    return 0;
}
