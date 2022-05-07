#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"


using namespace std;
namespace coup{
    class Duke: public Player{
    
    
    public:
    Duke( Game &game, string const& name);
    ~Duke();
    static void block(Player &play);
    void tax();
    
      
    };


}