/******************************************************
** Program: pit.h
** Author: Jarrod Saechao
** Date: 05/15/2019
** Description: header file
** Input:
** Output: declares functions and class members
******************************************************/

#ifndef PIT_H
#define PIT_H
#include "event.h"


class Pit : public Event
{
  private:
    string percept = "You feel febreeze";

  public:
    string get_percept();
};



#endif
