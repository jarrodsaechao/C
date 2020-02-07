/******************************************************
** Program: game.h
** Author: Jarrod Saechao
** Date: 05/15/2019
** Description: header file for game
** Input:
** Output:
******************************************************/

#ifndef GAME_H
#define GAME_H
#include "room.h"
#include "event.h"

class Game
{
  private:
    int coor_x,coor_y;
    int rope_x,rope_y;
    int wumpus_x,wumpus_y;
    int gold_x,gold_y;
    int a_x,a_y;
    int bat_x,bat_y;
    int pit_x,pit_y;
    vector<vector<Room*> > cave;
    bool live = true;
    bool wumpus = false;
    int arrows = 0;
    bool gold = false;



  public:
    Game();
    ~Game();
    void object_encounter();
    void set_game_up();
    void print_board();
    void shoot(string );
    void move_player(string );
    void check_spot();
    bool objective_check();

};
#endif
