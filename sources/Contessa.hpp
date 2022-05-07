#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"
#include "Assassin.hpp"
#pragma once

using namespace std;
namespace coup{
    class Contessa: public Player{
   
  
    public:
    Contessa( Game &game, string const& name);
    ~Contessa();
    void block(Assassin &play); 
    static void block(Player &play); 
    


    };


}