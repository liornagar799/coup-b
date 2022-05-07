#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"
#pragma once

using namespace std;
namespace coup{
    class Assassin: public Player{
   
    public:
    Assassin( Game &game, string const& name);
    ~Assassin();
    // במימוש שונה 
    virtual void coup(Player &play);  
     

    };


}