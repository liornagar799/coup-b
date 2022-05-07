#include "Contessa.hpp"   
#include "Assassin.hpp"
   
   const bool check=true;
   
   coup::Contessa::Contessa( Game &game, string const& name) : Player(game,name){
       this->role_of_player="Contessa";
   }
    coup::Contessa::~Contessa(){}
    void coup::Contessa::block(Assassin &play){
       if((play.act=="coup")&&(play.role_of_player=="Assassin")&&(!play.cant_block)){
       string to_add = play.name_to;
       int len = to_add.size();
       for ( string& i : game.players_of_game){
       bool f=true;
       size_t y=0;
       size_t x=1;
       if((i.size())-1!=len){
       f=false;
       }
       while(y<len){    
       if(i[x]!=to_add[y]){
        f=false;
         break;
       }
       if(i[x]==to_add[y]){
       x++;
       y++;
       }
       //////
       } 
 
     if(f==check){
     i=to_add;
     }
     }



    }else{
         throw invalid_argument ("need to do coup"); 
        }

    } 

    void coup::Contessa::block(Player &play){
        if(play.role_of_player!="Assassin"){
        throw invalid_argument ("need to do coup");   
        }
       
    }