#include "Duke.hpp"
const int ten=10;

    coup::Duke::Duke(Game &game, string const& name): Player(game,name) {
          this->role_of_player="Duke";
    }
    coup::Duke::~Duke(){}
    void coup::Duke::block(Player &play){
         if(play.act=="foreign_aid"){
      play.sum_coins-=2; 
    }else{
         throw invalid_argument ("cant do block"); 
        }
    }
    
    void coup::Duke::tax(){
      if(game.turn()!=this->name_of_player){
            throw invalid_argument ("not your turn");  
    }    
     if(this->sum_coins==ten){
     throw invalid_argument ("need to do coup");   
     }
     this->sum_coins+=3;   
     game.tar++;  
      this->act ="tax";    
    }