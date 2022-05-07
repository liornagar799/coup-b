#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"
#include "Captain.hpp"
#pragma once

using namespace std;
namespace coup{
    class Ambassador: public Player{
    
  
    public:
    Ambassador( Game &game, string const& name);
    ~Ambassador();
     static void block(Captain &play); 
     static void block(Player &play); 
     void transfer(Player &play1, Player &play2);

    };


}