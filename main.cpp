#include <iostream>
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Game.hpp"

#include <exception>

using namespace coup;
using namespace std;

int main(){
Game game_1{};
string name;
cout << "please enter a name of plyaer 1" << endl;
cin >> name;

Duke duke{game_1, name};
cout << "please enter a name of plyaer 2" << endl;
cin >> name;
Assassin assassin{game_1, name};
cout << "please enter a name of plyaer 3" << endl;
cin >> name;
Ambassador ambassador{game_1, name};

duke.income();
assassin.income();
ambassador.income();
duke.income();
assassin.foreign_aid();
ambassador.transfer(duke, assassin); 

cout << duke.coins() << endl; // prints 2
cout << assassin.coins() << endl; // prints 3

}
