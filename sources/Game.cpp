    #include "Game.hpp"
    
    
    coup::Game::Game() : tar(0), players_of_game({}) , flag(false) , start(false){}
    coup::Game::~Game(){}

    vector<string> coup::Game::players(){
     vector<string> curr;
     for (string& i : this->players_of_game) {
       if(i[0]!='#'){
        curr.push_back(i); 
       }
       }
     return curr;   
    }

    string coup::Game::turn(){
      int how_mach = this->players_of_game.size();
      size_t val=size_t((this->tar)%how_mach);
      int t=0;
      while(t!=1){
      if(this->players_of_game.at(val)[0]!='#'){
    
        return this->players_of_game.at(val);
      }
      tar++;
      val=size_t((this->tar)%how_mach);
      
    }
    return " ";
    }

    string coup::Game::winner(){
      if(!this->start){
         throw invalid_argument ("the game not start");  
    }
      if(this->players().size()>1){
      throw invalid_argument ("the play doesnt stop");   
    }
      return this->players().at(0) ; 
    }

   void coup::Game::delete2(string const &str){
     size_t j=0;
     string name = "#"+str;
     for (string& i : this->players_of_game) {
      if(str==i){
        i=name;
       j++; 
      }
    }
   }


   void coup::Game::add2(string const &str, size_t place){
     size_t j=0;
     for ( string& i : this->players_of_game){
       if(j==place){
        i=str;
       }
       j++;
     }
   }

  