/******************************************************
** Program: test.cpp
** Author: Jarrod Saechao
** Date: 05/15/2019
** Description: implementation file
** Input:
** Output: defines functions and class members
******************************************************/
#include "bat.h"
#include "event.h"
#include "room.h"
#include "game.h"


int main(int argc, char* argv[])
{
  int grid = atoi(argv[1]);
  int debug = atoi(argv[2]);
  Game g;
  string choice;
  string shooter;
  int s;
  g.set_game_up();

  while(g.objective_check() == false){

    g.check_spot();
    if ( debug == 1)
    {
        g.print_board();
    }

    cout << "Would you like to shoot? Press 1 for yes" << endl;
    cin >> s ;
    if(s == 1)
    {
      cout << "Shoot what direction?" << endl;
      cin >> shooter;
      g.shoot(shooter);
    }
    cout << "Where would you like to proceed?" << endl;
    cin >> choice ;
    g.move_player(choice);
    g.object_encounter();
  }

}
