/******************************************************
** Program: Room.cpp
** Author: Jarrod Saechao
** Date: 05/15/2019
** Description: implementation file
** Input:
** Output: defines functions and class members
******************************************************/

#include "room.h"


/******************************************************
** Function: Room()
** Descrpition: initializes room object
** Input:
** Output: creates room object
******************************************************/

Room :: Room()
{
  ptr = NULL;
}


/******************************************************
** Function: ~Room()
** Descrpition: frees Room object
** Input: object created
** Output: memory free
******************************************************/

Room :: ~Room()
{
}

/******************************************************
** Function: delete_ptr
** Descrpition: deletes currrent pointer to be set again
** Input:
** Output: delete old pointer
******************************************************/

void Room :: delete_ptr()
{
  delete ptr;
}

/******************************************************
** Function: set_ptr
** Descrpition: creates new pointer to be set
** Input: a number
** Output: new pointer set to object type
******************************************************/

void Room :: set_ptr(int x)
{
  // Event *ptr;

  if (x == 1)
  {

    ptr = new Wumpus;
    ptr_number = 1;
    filler = true;

  }

  else if (x == 2)
  {
    ptr = new Gold;
    ptr_number = 2;
    filler = true;
  }

  else if (x == 3)
  {
    ptr = new Bat;
    ptr_number = 3;
    filler = true;
  }

  else if (x == 4)
  {
    ptr = new Pit;
    ptr_number = 4;
    filler = true;
  }

  else if (x == 5)
  {
    ptr = new Empty;
    filler = true;
  }

}

/******************************************************
** Function: get_p
** Descrpition: gets the perception from class
** Input:
** Output: gets the perception
******************************************************/

string Room :: get_p()
{
  return ptr->get_percept();

}

/******************************************************
** Function: get_ptr
** Descrpition: gets encounter from class
** Input:
** Output: gets the encounter function
******************************************************/

int Room :: get_ptr()
{
  return ptr_number;
}



/******************************************************
** Function: bool_filler
** Descrpition: checks for filled spot
** Input:
** Output:
******************************************************/

bool Room :: get_filler()
{
  return filler;
}


//as
