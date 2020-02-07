/******************************************************
** Program: empty.h
** Author: Jarrod Saechao
** Date: 05/15/2019
** Description: header file
** Input:
** Output: declares functions and class members
******************************************************/

#ifndef EMPTY_H
#define EMPTY_H
#include "event.h"


class Empty : public Event
{
  private:
    string percept = "This area seems to be clear";

  public:
    string get_percept();
};



#endif
