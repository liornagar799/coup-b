#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"
#pragma once

using namespace std;
namespace coup{
    class Captain: public Player{

    public:
    Captain( Game &game, string const& name);
    ~Captain();
    void steal(Player &play);  
    static void block(Captain &play);
    static void block(Player &play);
    

    };


}