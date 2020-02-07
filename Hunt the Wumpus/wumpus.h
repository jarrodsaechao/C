/******************************************************
** Program: wumpus.h
** Author: Jarrod Saechao
** Date: 05/15/2019
** Description: header file
** Input:
** Output: declares functions and class members
******************************************************/

#ifndef WUMPUS_H
#define WUMPUS_H
#include "event.h"


class Wumpus : public Event
{
  private:
    string percept = "Something smells nasty";

  public:
    string get_percept();
};



#endif
