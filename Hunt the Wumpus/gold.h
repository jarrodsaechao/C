/******************************************************
** Program: gold.h
** Author: Jarrod Saechao
** Date: 05/15/2019
** Description: header file
** Input:
** Output: declares functions and class members
******************************************************/

#ifndef GOLD_H
#define GOLD_H
#include "event.h"


class Gold : public Event
{
  private:
    string percept = "You see something shiny";
    

  public:
    string get_percept();

};



#endif
