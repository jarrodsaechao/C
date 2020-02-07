/******************************************************
** Program: bat.h
** Author: Jarrod Saechao
** Date: 05/15/2019
** Description: header file
** Input:
** Output: declares functions and class members
******************************************************/

#ifndef BAT_H
#define BAT_H
#include "event.h"


class Bat : public Event
{
  private:
    string percept = "You hear flapping wings";

  public:
    string get_percept();
};



#endif
