#include "Assassin.hpp"   
   
   const int seven=7;
   
  

coup::Assassin::Assassin( Game &game, string const& name) : Player(game,name){
    this->role_of_player="Assassin";
}
coup::Assassin::~Assassin(){} 
 void coup::Assassin::coup(Player &play){
    if(std::find(game.players_of_game.begin(), game.players_of_game.end(), this->name_of_player) != game.players_of_game.end()) {
      ;
    } else {
      throw invalid_argument ("not in the game");  
    }   
    if(std::find(game.players_of_game.begin(), game.players_of_game.end(), play.name_of_player) != game.players_of_game.end()) {
      ;
    } else {
      throw invalid_argument ("not in the game");  
    }

    if(game.turn()!=this->name_of_player){
            throw invalid_argument ("not your turn");  
    }
    if(this->sum_coins<3){
         throw invalid_argument ("Not enough money");   
    }
    if(this->sum_coins>=seven){
    this->sum_coins-=seven;   
    game.tar++;
    play.delete1();
    this->act ="coup";
    this->name_to=play.name_of_player; 
    this->cant_block=true;
    return;
    }
    this->sum_coins-=3;
    game.tar++;   
    play.delete1();
    this->act ="coup";
    this->name_to=play.name_of_player; 
    this->cant_block=false;
    
     
}