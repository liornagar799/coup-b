#include "Ambassador.hpp"
const int ten=10;


namespace coup{

    coup::Ambassador::Ambassador( Game &game, string const& name) : Player(game,name){
         this->role_of_player="Ambassador";
    }
    coup::Ambassador::~Ambassador(){}

    /// stop steal?
   void coup::Ambassador::block(Captain &play){
        if((play.act=="steal") &&(play.role_of_player=="Captain")){
         play.flag=true;
         play.steal(*play.p);
       
        }
    }

     void coup::Ambassador::block(Player &play){
        if(play.role_of_player!="Captain"){
        throw invalid_argument ("need to do coup");   
        }
       
    }
    
    void coup::Ambassador::transfer(Player &play1, Player &play2){
        if(game.turn()!=this->name_of_player){
            throw invalid_argument ("not your turn");  
        }
        if(this->sum_coins==ten){
        throw invalid_argument ("need to do coup");   
        }
        if(play1.sum_coins<1){
         throw invalid_argument ("Not enough money");   
        }
        play1.sum_coins-=1;
        play2.sum_coins+=1;
        game.tar++;  
        this->act ="transfer"; 
        
    }
}