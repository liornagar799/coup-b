#pragma once
#include <iostream>
#include <string>
#include "Game.hpp"
#include <vector>

using namespace std;
namespace coup{
    class Player{
    public:
    int sum_coins;
    Game &game;
    string name_of_player;
    string role_of_player;
    bool flag;
    size_t my_tor;
    string act;
    
    
   

    public:
    Player* p;
    string name_to;
    bool cant_block;
    Player(Game &game1, string const &name);
    ~Player();
    void income();
    void foreign_aid();
    void delete1();
    void add1();
    string role()const;
    virtual void coup(Player play);   
    int coins() const; 
    void set_coins(int s);
    };


}