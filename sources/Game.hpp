#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
namespace coup{
    class Game{
    private:
   

    public:
    bool start;
    std::vector<string> players_of_game;
    bool flag;
    int tar;
    Game();
    ~Game();
    void delete2(string const &str);
    void add2(string const &str, size_t place);
    vector<string> players();
    string turn();
    string winner(); 
    };


}