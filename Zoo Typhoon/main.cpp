/******************************************************
** Program: main.cpp
** Author: Jarrod Saechao
** Date: 05/04/2019
** Description: Driver File
** Input:
** Output: Runs Program
******************************************************/

#include "zoo.h"
#include "animal.h"
#include "monkey.h"
#include "seaotter.h"
#include "meekrat.h"


int main()
{
  Zoo zoo;
  bool game = true;

  cout << " WELCOME TO ZOO TYPHOON " << endl;

  while(game)
  {
    cout << endl;
    zoo.get_money();
    cout << endl;
    zoo.buy_animal();
    cout << endl;
    zoo.random_event();
    cout << endl;
    zoo.sub_food();
    cout << endl;
    zoo.add_money();
    cout << endl;
    zoo.increase_age();
    cout << endl;
    if(zoo.game() == false )
    {
      game = false;
    }
    cout << endl;


  }


  return 0;


}
