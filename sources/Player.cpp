#include "Player.hpp"
size_t M=0;
const int ten=10;
const int sex=6;
const int seven=7;

namespace coup{
    coup::Player::Player(Game &game1, string const& name) : game(game1), name_of_player(name), flag(false),sum_coins(0), my_tor(M), act(" ") {
    if(game.start){
         throw invalid_argument ("the game start");  
    }
    if(game.players_of_game.size()==sex){
         throw invalid_argument ("6 pepole in the game");  
    }
     game.players_of_game.push_back(name);  
     M++;
     this->cant_block=false;
     this->p=this;
    }
    
    coup::Player::~Player(){}

    void coup::Player::income(){
    if(game.players_of_game.size()<2){
         throw invalid_argument ("just 1 plyaer");  
    }
     if(game.turn()!=this->name_of_player){
            throw invalid_argument ("not your turn");  
    }    
    if(this->sum_coins==ten){
      throw invalid_argument ("need to do coup");   
    }
    this->sum_coins++;
    game.tar++;
    this->act ="income";  
    game.start=true; 
    }

    void coup::Player::foreign_aid(){
      if(game.players_of_game.size()<2){
         throw invalid_argument ("just 1 plyaer");  
    }
    if(std::find(game.players_of_game.begin(), game.players_of_game.end(), this->name_of_player) != game.players_of_game.end()) {
      ;
    }else {
      throw invalid_argument ("not in the game");  
    }   
       
        if(game.turn()!=this->name_of_player){
            throw invalid_argument ("not your turn");  
        }
        if(this->sum_coins>=ten){
        throw invalid_argument ("need to do coup");   
        }
        this->sum_coins+=2;    
        game.tar++;
        this->act ="foreign_aid"; 
        game.start=true;  
    }

    string coup::Player::role()const{
        return this->role_of_player;
    }

    void coup::Player::coup(Player play){
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
    if(this->sum_coins<seven){
         throw invalid_argument ("Not enough money");   
    }
        this->sum_coins-=seven;
        game.tar++;    
        play.delete1(); 
        this->act="coup"; 
    }  

    int coup::Player::coins()const{
        return this->sum_coins;
    }

    void coup::Player::delete1(){
      game.delete2(this->name_of_player);  
    }

    void coup::Player::add1(){
        size_t place = this->my_tor;
         game.add2(this->name_of_player,  place);  
    }

    void coup::Player::set_coins(int s){
       this->sum_coins-=s; 
    }
}