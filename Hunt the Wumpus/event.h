/******************************************************
** Program: event.h
** Author: Jarrod Saechao
** Date: 05/15/2019
** Description: header file for abstract class
** Input: pure virtual
** Output: allows other class to inherit the function
******************************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <vector>

#ifndef EVENT_H
#define EVENT_H

using namespace std;

class Event
{
private:
  string percept;
  bool encounter;

public:
  virtual string get_percept() = 0;
  


};

#endif
