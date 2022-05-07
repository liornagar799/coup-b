#include "Captain.hpp"
const bool check=true;
const int ten=10;

namespace coup{
    coup::Captain::Captain(Game &game, string const& name) : Player(game,name){
        this->role_of_player="Captain";
    }
    coup::Captain::~Captain(){}
    void coup::Captain::steal(Player &play){
        if(this->flag==check){
        play.sum_coins+=2;
        this->sum_coins-=2;
        this->flag=false;
        return;
        }
        if(game.turn()!=this->name_of_player){
         throw invalid_argument ("not your turn");  
        }
        if(this->sum_coins==ten){
        throw invalid_argument ("need to do coup");   
        }
        if(play.sum_coins==1){
        play.sum_coins-=1;
        this->sum_coins+=1;
        game.tar++;  
         this->act ="steal"; 
        this->p=&play;
        return;  }
        if(play.sum_coins==0){
        game.tar++;  
        this->act ="steal"; 
        this->p=&play;
        return;  
        }
        play.sum_coins-=2;
        this->sum_coins+=2;
        game.tar++;  
         this->act ="steal"; 
        this->p=&play;
        
    } 

    void coup::Captain::block(Captain &play){
        if((play.act=="steal") &&(play.role_of_player=="Captain")){
         play.flag=true;
         play.steal(*play.p);
        //  game.act ="block";  
        }
    }

    void coup::Captain::block(Player &play){
        if(play.role_of_player!="Captain"){
        throw invalid_argument("not captain");
        }
    
}
}